#include "../includes/Intern.hpp"

Intern::Intern(void)
{
}

AForm* Intern::makeForm(std::string s1, std::string s2)
{
    std::string array[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
    AForm *form[3] = {new PresidentialPardonForm(s2), new RobotomyRequestForm(s2), new ShrubberyCreationForm(s2)};
    int i = -1;
    while (++i < 2)
    {
        if (array[i].compare(s1))
            return form[i];
    } 
    std::cout << "Invalid form type, please type the valid form type [Name] + *Form* keyword" << std::endl;
    return NULL;
}   