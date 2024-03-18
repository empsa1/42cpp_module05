#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"
# define SUCCESS 0
# define FAILURE 1

int main()
{
	std::cout << "\n===== Sign fail =====\n\n";
	try
	{
		Bureaucrat b("ze", 100);
		Form f("form1", 1, 10);
		std::cout << b;
		std::cout << f;
		b.signForm(f);
		std::cout << f;
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}

	std::cout << "\n===== Sign ok =====\n\n";
	try
	{
		Bureaucrat b("ze", 100);
		Form f("form1", 100, 10);
		//std::cout << b;
		//std::cout << f;
		b.signForm(f);
		//std::cout << f;
		b.signForm(f);
		//std::cout << f;
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return (0);
}