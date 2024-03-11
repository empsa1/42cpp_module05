#include "../includes/PresidentialPardonForm.hpp"

//Default Constructor
PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("default")
{
}
//Parameter constructor
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target) 
{
}

//Copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm("PresidentialPardonForm", 25, 5), target(other.getTarget())
{
    *this = other;
}
// Destructor
PresidentialPardonForm::~PresidentialPardonForm() {
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

