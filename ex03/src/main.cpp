#include "../includes/AForm.hpp"
#include "../includes/Intern.hpp"

# define SUCCESS 0
# define FAILURE 1

int main() {
    try {
        Intern intern;
        Bureaucrat bureaucrat("John Doe", 1);
        Bureaucrat a = bureaucrat;
        PresidentialPardonForm presidential("A");
        RobotomyRequestForm robotomy("B");
        ShrubberyCreationForm shrubbery("C");
        Bureaucrat b;
        intern.makeForm("PresidentialPardonForm", "england");
        presidential.beSigned(a);
        presidential.beSigned(a);
        std::cout << "Is form signed: " << presidential.isAFormSigned() << std::endl;
        a.decrementGrade();
        bureaucrat.decrementGrade();
        std::cout << b.getGrade() << std::endl;
        std::cout << b.getName() << std::endl;
        std::cout << "Using the overload operator: " <<  b << std::endl;
        std::cout << bureaucrat.getGrade() << std::endl;
        std::cout << bureaucrat.getName() << std::endl;
        std::cout << "Using the overload operator: " <<  a << std::endl;
        return (SUCCESS);
    } catch (const GradeTooHighException& e) {
        std::cerr << "Caught GradeTooHighException:     " << e.error() << std::endl;
    } catch (const GradeTooLowException& e) {
        std::cerr << "Caught GradeTooLowException:      " << e.error() << std::endl;
    } catch (const CantExecException& e) {
        std::cerr << "Caught CantExecException:         " << e.error() << std::endl;
    } catch (const FormNotSignedException& e) {
        std::cerr << "Caught FormNotSignedException:    " << e.error() << std::endl;
    }
    return (FAILURE);
}