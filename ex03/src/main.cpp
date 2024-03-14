#include "../includes/AForm.hpp"
#include "../includes/Intern.hpp"

# define SUCCESS 0
# define FAILURE 1

int main()
{
	std::cout << "\n===== Creating a non-existing form =====\n\n";
	try
	{
		Bureaucrat b("ze", 5);
		Intern i;
		AForm *f = i.makeForm("PresidedntialPardonForm", "target");
		std::cout << *f;
		b.signForm(*f);
		b.executeForm(*f);
		//delete f;
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}

	std::cout << "\n===== Creating a ShrubberyCreationForm form =====\n\n";
	try
	{
		Bureaucrat b("ze", 5);
		Intern i;
		AForm *f = i.makeForm("ShrubberyCreationForm", "target");
		std::cout << *f;
		b.signForm(*f);
		b.executeForm(*f);
		//delete f;
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}

	std::cout << "\n===== Creating a RobotomyRequestForm form =====\n\n";
	try
	{
		Bureaucrat b("ze", 5);
		Intern i;
		AForm *f = i.makeForm("RobotomyRequestForm", "target");
		std::cout << *f;
		b.signForm(*f);
		b.executeForm(*f);
		//delete f;
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}

	std::cout << "\n===== Creating a PresidentialPardonForm form =====\n\n";
	try
	{
		Bureaucrat b("ze", 5);
		Intern i;
		AForm *f = i.makeForm("PresidentialPardonForm", "target");
		std::cout << *f;
		b.signForm(*f);
		b.executeForm(*f);
		//delete f;
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return (0);
}