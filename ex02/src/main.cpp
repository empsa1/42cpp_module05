#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/Bureaucrat.hpp"
# define SUCCESS 0
# define FAILURE 1

// int main()
// {
// 	try
// 	{
// 		Bureaucrat b("ze", 1);
// 		ShrubberyCreationForm f("/home/eportela/Desktop/42cpp_module05/ex02");
// 		b.signForm(f);
// 		b.executeForm(f);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
	
// 	return 0;
// }

int main()
{
	/*	
		ShrybberyCreationForm:	sign:145, exec: 137;
		RobotomyRequestForm:	sign: 72, exec: 45;
		PresidentialPardonForm:	sign: 25, exec: 5;
	*/
	std::cout << "\n===== Sign fail, Exec ok =====\n\n";
	try
	{
		Bureaucrat b("ze", 147);
		std::cout << b << std::endl;
		PresidentialPardonForm f("someGuy");
		std::cout << f << std::endl;
		b.signForm(f);
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}

	std::cout << "\n===== Sign ok, Exec fail =====\n\n";
	try
	{
		Bureaucrat b("ze", 6);
		std::cout << b << std::endl;
		PresidentialPardonForm f("someGuy");
		std::cout << f << std::endl;
		b.signForm(f);
		std::cout << f << std::endl;
		b.executeForm(f);
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}

	std::cout << "\n===== PresidentialPardonForm Sign ok, Exec ok =====\n\n";
	try
	{
		Bureaucrat b("ze", 5);
		std::cout << b << std::endl;
		PresidentialPardonForm f("someGuy");
		std::cout << f << std::endl;
		b.signForm(f);
		std::cout << f << std::endl;
		b.executeForm(f);
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}

	std::cout << "\n===== ShrubberyCreationForm Sign ok, Exec ok =====\n\n";
	try
	{
		Bureaucrat b("ze", 5);
		ShrubberyCreationForm f("someGuy");
		std::cout << f << std::endl;
		b.signForm(f);
		std::cout << f << std::endl;
		b.executeForm(f);
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}

	std::cout << "\n===== RobotomyRequestForm Sign ok, Exec ok =====\n\n";
	try
	{
		Bureaucrat b("ze", 5);
		RobotomyRequestForm f("someGuy");
		std::cout << f << std::endl;
		b.signForm(f);
		std::cout << f << std::endl;
		b.executeForm(f);
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return (0);
}