#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
    public:
        class InvalidForm : public std::exception {
            public:
                virtual const char* what() const throw()
                {
                    return RED INVALID_FORM RESET;
                }
            };
        Intern(); //Default Constructor;
        ~Intern(); //Destructor
        Intern(const Intern&); // Public copy constructor
        Intern& operator=(const Intern&); // Public copy assignment operator
        AForm* makeForm(const std::string& name, const std::string& target) const;
};

#endif