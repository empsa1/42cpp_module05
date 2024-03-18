#include "../includes/Intern.hpp"
#include "../includes/Colors.hpp"

Intern::Intern(void)
{
    std::cout << YELLOW DEFAULT_CONSTRUCTOR RESET << std::endl;
}

Intern::~Intern()
{
    std::cout << YELLOW DESTRUCTOR RESET << std::endl;
}

Intern::Intern(const Intern&) {
    std::cout << YELLOW COPY_CONSTRUCTOR RESET << std::endl;
}

Intern& Intern::operator=(const Intern&) {
    std::cout << YELLOW ASSIGMENT_OPERATOR RESET << std::endl;
    return *this;
}

AForm* Intern::makeForm(const std::string& name, const std::string& target) const {
    static const std::string names[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    AForm* forms[] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
    int index = -1;
    for (int i = 0; i < 3; ++i) {
        if (name == names[i]) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        for (int i = 0; i < 3; ++i) {
            delete forms[i]; // Delete all created forms
        }
        throw InvalidForm();
    }
    std::cout << "Intern creates " << name << std::endl;
    for (int i = 0; i < 3; ++i) {
        if (i != index) {
            delete forms[i]; // Delete forms except the one being returned
        }
    }
    return forms[index];
}