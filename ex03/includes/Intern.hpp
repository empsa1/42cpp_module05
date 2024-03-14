#ifndef INTERN_HPP
# define INTERN_HPP

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
    public:
        Intern(void); 
        ~Intern(void);
        AForm* makeForm(std::string s1, std::string s2);
};

#endif