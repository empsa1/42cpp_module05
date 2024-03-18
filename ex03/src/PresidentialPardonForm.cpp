#include "../includes/PresidentialPardonForm.hpp"

//Default Constructor
PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("default")
{
    std::cout << DEFAULT_CONSTRUCTOR << std::endl;
}
//Parameter constructor
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target) 
{
    std::cout << PARAMTER_CONSTRUCTOR << std::endl;
}

//Copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm("PresidentialPardonForm", 25, 5), target(other.getTarget())
{
    std::cout << COPY_CONSTRUCTOR << std::endl;
    *this = other;
}
// Destructor
PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << DESTRUCTOR << std::endl;
}

//Overloaded Constructor
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this == &other)
		return *this;
	return *this;
}

//getter for target attribute
std::string PresidentialPardonForm::getTarget(void) const
{
    return (this->target);
}

void PresidentialPardonForm::beSigned(Bureaucrat const & bureaucrat) {
    if (bureaucrat.getGrade() <= getGradeToSign()) {
        this->setSigned();
        std::cout << bureaucrat.getName() << " signed " << getName() << std::endl;
    } else {
        std::cout << bureaucrat.getName() << " grade does not allow them to sign: " << getName() << std::endl;
    }
}

//execute implementation
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->isAFormSigned() == true)
    {
        if (this->getgradeToExec() >= executor.getGrade())
        {
            std::cout << executor.getName() << " executed " << this->getName() << std::endl;
            std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
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
