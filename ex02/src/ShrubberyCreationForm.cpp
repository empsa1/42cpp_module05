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