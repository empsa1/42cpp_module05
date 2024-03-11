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