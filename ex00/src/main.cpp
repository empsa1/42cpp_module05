#include "../includes/Bureaucrat.hpp"
# define SUCCESS 0
# define FAILURE 1

int main()
{
	std::cout << "\n===== Try creating a Bureaucrat with -100 =====\n\n";
	try
	{
		Bureaucrat b("ze", -100);
		//std::cout << b;
		//b.incrementGrade();
		//std::cout << b.getGrade() << "\n";
		//b.decrementGrade();
		//std::cout << b.getGrade() << "\n";
	}
	catch(const GradeTooHighException& e)
	{
		std::cout << e.error();
	}
    /*
	std::cout << "\n===== Try creating a Bureaucrat with 151 =====\n\n";
	try
	{
		Bureaucrat b("ze", 151);
		std::cout << b;
		b.incrementGrade();
		std::cout << b.getGrade() << "\n";
		b.decrementGrade();
		std::cout << b.getGrade() << "\n";
	}
	catch(const GradeTooLowException& e)
	{
		std::cout << e.error();
	}
    try {
	    std::cout << "\n===== Try creating a Bureaucrat with 100 =====\n\n";
	    Bureaucrat b("ze", 100);
	    std::cout << b;
	    b.incrementGrade();
	    std::cout << b.getGrade() << "\n";
	    b.decrementGrade();
	    std::cout << b.getGrade() << "\n";
    } catch(const GradeTooLowException& e)
	{
		std::cout << e.error();
	}
    catch(const GradeTooHighException& e)
	{
		std::cout << e.error();
	}*/
	std::cout << "\n===== Try creating a Bureaucrat with 1 =====\n\n";
    try {
	    Bureaucrat b("ze", 1);
	    /*std::cout << b;
	    std::cout << "Prints\n";
	    b.incrementGrade();
	    std::cout << "Will not print\n";
	    std::cout << b.getGrade() << "\n";
	    b.incrementGrade();
	    std::cout << b.getGrade() << "\n";
	    b.decrementGrade();
	    std::cout << b.getGrade() << "\n";
	    b.decrementGrade();
	    std::cout << b.getGrade() << "\n";*/
    } catch(const GradeTooLowException& e)
	{
		std::cout << e.error();
	}
    catch(const GradeTooHighException& e)
	{
		std::cout << e.error();
	}
	return (0);
}