#include "../includes/Bureaucrat.hpp"
# define SUCCESS 0
# define FAILURE 1

int main()
{
	std::cout << "\n===== Try creating a Bureaucrat with -100 =====\n\n";
	try
	{
		Bureaucrat b("ze", -100);
		std::cout << b;
		b.incrementGrade();
		std::cout << b.getGrade() << "\n";
		b.decrementGrade();
		std::cout << b.getGrade() << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
	}
	
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
	catch(const std::exception& e)
	{
		std::cout << e.what();
	}
	
	std::cout << "\n===== Try creating a Bureaucrat with 100 =====\n\n";
	try
	{
		Bureaucrat b("ze", 100);
		std::cout << b;
		b.incrementGrade();
		std::cout << b.getGrade() << "\n";
		b.decrementGrade();
		std::cout << b.getGrade() << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
	}
	
	std::cout << "\n===== Try creating a Bureaucrat with 1 =====\n\n";
	try
	{
		Bureaucrat b("ze", 1);
		std::cout << b;
		std::cout << "Prints\n";
		b.incrementGrade();
		std::cout << "Will not print\n";
		std::cout << b.getGrade() << "\n";
		b.setGrade(150);
		b.incrementGrade();
		std::cout << b.getGrade() << "\n";
		b.decrementGrade();
		std::cout << b.getGrade() << "\n";
		b.decrementGrade();
		std::cout << b.getGrade() << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
	}
	return (0);
}