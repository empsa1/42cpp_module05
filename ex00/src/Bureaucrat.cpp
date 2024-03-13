#include "../includes/Bureaucrat.hpp"

const char* GradeTooHighException::error() const throw() {
    return RED GRADE_TO_HIGH RESET;
}

const char* GradeTooLowException::error() const throw() {
    return RED GRADE_TO_LOW RESET;
}

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
    std::cout << GREEN GET_NAME RESET << std::endl;
    return (name);
}

int Bureaucrat::getGrade() const {
oMsg += RESET;
    std::cout << infoMsg;
    return (grade);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return os;
}

void Bureaucrat::incrementGrade() {
   infoMsg += RESET;
    std::cout << infoMsg;
    if (grade - 1 < 1)
        throw GradeTooHighException();
    else
        grade--;
    std::cout << infoMsg << "Changed grade for: " << name << ", Grade: " << grade << std::endl;
}

void Bureaucrat::decrementGrade() {
   infoMsg += RESET;
    if (grade + 1 > 150)
        throw GradeTooLowException();
    else
        grade++;
    std::cout << infoMsg << "Changed grade for: " << name << ", Grade: " << grade << std::endl;
}