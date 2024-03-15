#ifndef INTERN_HPP
# define INTERN_HPP

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
    public:
        class InvalidForm : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return (RED INVALID_FORM RESET);
                }
        };
        Intern(void); 
        ~Intern(void);
        AForm* makeForm(std::string name, std::string target) const;
};

#endif