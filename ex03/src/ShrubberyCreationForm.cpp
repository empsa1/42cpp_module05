#include "../includes/ShrubberyCreationForm.hpp"

//Default Constructor
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("default")
{
}
//Parameter constructor
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target) 
{
}

//Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm("ShrubberyCreationForm", 145, 137), target(other.getTarget())
{
    *this = other;
}
// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm() {
}

//Overloaded Constructor
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this == &other)
		return *this;
	return *this;
}

//getter for target attribute
std::string ShrubberyCreationForm::getTarget(void) const
{
    return (this->target);
}

void ShrubberyCreationForm::beSigned(Bureaucrat const & bureaucrat) {
    if (bureaucrat.getGrade() <= getGradeToSign()) {
        this->setSigned();
        std::cout << bureaucrat.getName() << " signed " << getName() << std::endl;
    } else {
        std::cout << bureaucrat.getName() << " grade does not allow them to sign: " << getName() << std::endl;
    }
}

//execute implementation
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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