#include "../includes/RobotomyRequestForm.hpp"

//Default Constructor
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("default")
{
}
//Parameter constructor
RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target) 
{
}

//Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm("RobotomyRequestForm", 72, 45), target(other.getTarget())
{
    *this = other;
}
// Destructor
RobotomyRequestForm::~RobotomyRequestForm() {
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
		if (this->getgradeToExec() <= executor.getGrade())
		{
			std::cout << executor.getName() << " signed " << this->getName() << std::endl;
		}
		else {
			throw CantExecException();
		}
	}
	else {
		throw FormNotSignedException();
	}
}