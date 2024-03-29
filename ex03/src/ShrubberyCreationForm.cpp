#include "../includes/ShrubberyCreationForm.hpp"

//Default Constructor
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("default")
{
    std::cout << DEFAULT_CONSTRUCTOR << std::endl;
}
//Parameter constructor
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target) 
{
    std::cout << PARAMTER_CONSTRUCTOR << std::endl;
}

//Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm("ShrubberyCreationForm", 145, 137), target(other.getTarget())
{
    std::cout << COPY_CONSTRUCTOR << std::endl;
    *this = other;
}
// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << DESTRUCTOR << std::endl;
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
        if (this->getgradeToExec() >= executor.getGrade())
        {
            std::cout << executor.getName() << " executed " << this->getName() << std::endl;
            std::ofstream outFile((this->target + "_shrubbery").c_str());

            if (outFile.is_open())
            {
                outFile << "      /\\      " << std::endl;
                outFile << "     /\\*\\     " << std::endl;
                outFile << "    /\\O\\*\\    " << std::endl;
                outFile << "   /*/\\/\\/\\   " << std::endl;
                outFile << "  /\\O\\/\\*\\/\\  " << std::endl;
                outFile << " /\\*\\/\\*\\/\\/\\ " << std::endl;
                outFile << "/\\O\\/\\/*/\\/O/\\" << std::endl;
                outFile << "      ||      " << std::endl;
                outFile << "      ||      " << std::endl;
                outFile << "      ||      " << std::endl;

                outFile.close();
            }
            else
            {
                std::cout << "Unable to create/open file: " << this->target + "_shrubbery" << std::endl;
            }
        }
        else {
            throw CantExecException();
        }
    }
    else {
        throw FormNotSignedException();
    }
}