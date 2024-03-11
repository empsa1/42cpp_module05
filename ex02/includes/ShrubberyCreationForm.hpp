#ifndef SHRUBBERY_CREATION_HPP
# define SHRUBBERY_CREATION_HPP

#include "AForm.hpp"
#include "Bureacrat.hpp"

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

        void beSigned(Bureaucrat& bureaucrat) override;
        void execute(Bureaucrat const& executor) const override;
};

#endif