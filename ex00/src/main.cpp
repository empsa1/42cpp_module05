#include "../includes/Bureaucrat.hpp"
#include "../includes/GradeTooHighException.hpp"
#include "../includes/GradeTooLowException.hpp"
# define SUCCESS 0
# define FAILURE 1

int main() {
    try {
        Bureaucrat bureaucrat("John Doe", 1);
        Bureaucrat a = bureaucrat;
        a.decrementGrade();
        bureaucrat.decrementGrade();
        std::cout << bureaucrat.getGrade() << std::endl;
        std::cout << bureaucrat.getName() << std::endl;
        return (SUCCESS);
    } catch (const GradeTooHighException& e) {
        std::cerr << "Caught GradeTooHighException: " << e.error() << std::endl;
    } catch (const GradeTooLowException& e) {
        std::cerr << "Caught GradeTooLowException: " << e.error() << std::endl;
    }
    return (FAILURE);
}