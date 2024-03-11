#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include "AForm.hpp"
#include "Bureacrat.hpp"

class RobotomyRequestForm : public AForm {

    private :
        const std::string target;

    public :
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& other);
        ~RobotomyRequestForm();

        RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
        
        std::string getTarget() const;

        void beSigned(Bureaucrat& bureaucrat) override;
        void execute(Bureaucrat const& executor) const override;
};

#endif