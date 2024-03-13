#include "../includes/Form.hpp"
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
        std::cout << "Using the overload operator: " <<  b << std::endl;
        std::cout << "Using the overload operator: " <<  a << std::endl;
        static std::string infoMsg = RED;
        infoMsg += NO_EXCEPTION_FOUND;
        infoMsg += RESET;
        std::cout << infoMsg.c_str() << std::endl << std::endl;
        return (SUCCESS);
    } catch (const GradeTooHighException& e) {
        std::cerr << "Caught GradeTooHighException: " << e.error() << std::endl;
    } catch (const GradeTooLowException& e) {
        std::cerr << "Caught GradeTooLowException: " << e.error() << std::endl;
    }
    return (FAILURE);
}