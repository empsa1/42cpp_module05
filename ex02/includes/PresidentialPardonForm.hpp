#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTAL_PARDON_FORM_HPP

#include "AForm.hpp"
#include "Bureacrat.hpp"

class PresidentialPardonForm : public AForm {

    private :
        const std::string target;

    public :
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& other);
        ~PresidentialPardonForm();

        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

        std::string getTarget() const;
        
        void beSigned(Bureaucrat& bureaucrat) override;
        void execute(Bureaucrat const& executor) const override;
};

#endif