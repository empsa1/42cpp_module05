#include "../includes/RobotomyRequestForm.hpp"

//Default Constructor
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("default")
{
    std::cout << DEFAULT_CONSTRUCTOR << std::endl;
}
//Parameter constructor
RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target) 
{
    std::cout << PARAMTER_CONSTRUCTOR << std::endl;
}

//Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm("RobotomyRequestForm", 72, 45), target(other.getTarget())
{
    std::cout << COPY_CONSTRUCTOR << std::endl;
    *this = other;
}
// Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << DESTRUCTOR << std::endl;
}

//Overloaded Constructor
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this == &other)
		return *this;
	return *this;
}

//getter for target attribute
std::string RobotomyRequestForm::getTarget(void) const
{
    return (this->target);
}

void RobotomyRequestForm::beSigned(Bureaucrat const & bureaucrat) {
    if (bureaucrat.getGrade() <= getGradeToSign()) {
        this->setSigned();
        std::cout << bureaucrat.getName() << " signed " << getName() << std::endl;
    } else {
        std::cout << bureaucrat.getName() << " grade does not allow them to sign: " << getName() << std::endl;
    }
}

//execute implementation
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->isAFormSigned())
    {
        if (this->getgradeToExec() >= executor.getGrade())
        {
            std::cout << executor.getName() << " executed " << this->getName() << std::endl;
            srand(time(NULL));
            int successRate = rand() % 100;
            if (successRate < 50)
            {
                std::cout << "Drilling noises... " << std::endl;
                std::cout << this->getTarget() << " has been robotomized successfully!" << std::endl;
            }
            else
            {
                std::cout << "Drilling noises... " << std::endl;
                std::cout << "Robotomy on " << this->getTarget() << " failed." << std::endl;
            }
        }
        else
        {
            throw CantExecException();
        }
    }
    else
    {
        throw FormNotSignedException();
    }
}