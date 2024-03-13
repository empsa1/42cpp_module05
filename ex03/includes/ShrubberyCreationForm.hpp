#ifndef SHRUBBERY_CREATION_HPP
# define SHRUBBERY_CREATION_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm {

    private :
        const std::string target;

    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
        
        std::string getTarget() const;

        void beSigned(Bureaucrat const& bureaucrat);
        void execute(Bureaucrat const& executor) const;
};

#endif