#include "../includes/Form.hpp"
#include "../includes/GradeTooHighException.hpp"
#include "../includes/GradeTooLowException.hpp"
#include "../includes/Bureaucrat.hpp"
# define SUCCESS 0
# define FAILURE 1

int main() {
    try {
        Bureaucrat bureaucrat("John Doe", 1);
        Bureaucrat a = bureaucrat;
        Bureaucrat b;
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
        std::cerr << "Caught GradeTooHighException: " << e.error() << std::endl;
    } catch (const GradeTooLowException& e) {
        std::cerr << "Caught GradeTooLowException: " << e.error() << std::endl;
    }
    return (FAILURE);
}