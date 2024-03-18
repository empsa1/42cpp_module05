#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/Colors.hpp"

Bureaucrat::Bureaucrat(void) : name("Not defined"), grade(150) {
    std::cout << YELLOW DEFAULT_CONSTRUCTOR RESET << "Created: " << name << ", Grade: " << grade << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade) {
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    std::cout << BLUE PARAMTER_CONSTRUCTOR RESET << "Created: " << name << ", Grade: " << grade << std::endl;
} 

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade) {
    std::cout << YELLOW COPY_CONSTRUCTOR RESET << "Created: " << name << ", Grade: " << grade << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << YELLOW DESTRUCTOR RESET << "Destroyed: " << name << ", Grade: " << grade << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	this->grade = other.getGrade();
	return *this;
}

const   std::string& Bureaucrat::getName() const {
    std::cout << GREEN GET_NAME RESET;
    return (name);
}

int Bureaucrat::getGrade() const {
    std::cout << GREEN GET_GRADE RESET; 
    return (grade);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << CYAN OVERLOAD_OPERATOR RESET << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return os;
}

void Bureaucrat::setGrade(int grade)
{
    if (grade > 150)
        throw(Bureaucrat::GradeTooHighException());
    if (grade < 1)
        throw(Bureaucrat::GradeTooLowException());
    this->grade = grade;
}

void Bureaucrat::incrementGrade() {
    if (grade - 1 < 1)
        throw GradeTooHighException();
    else
        grade--;
    std::cout << GREEN INCREMENT_GRADE RESET << "Changed grade for: " << name << ", Grade: " << grade << std::endl;
}

void Bureaucrat::decrementGrade() {
    if (grade + 1 > 150)
        throw GradeTooLowException();
    else
        grade++;
    std::cout << GREEN DECREMENT_GRADE RESET << "Changed grade for: " << name << ", Grade: " << grade << std::endl;
}
    
//method to sign forms
void Bureaucrat::signForm(AForm& form) {
    form.beSigned(*this);
}

//executeForm function
void Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}