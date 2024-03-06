#include "../includes/Bureaucrat.hpp"
#include "../includes/GradeTooHighException.hpp"
#include "../includes/GradeTooLowException.hpp"
#include <cstdlib>

//Default Constructor
Bureaucrat::Bureaucrat(void) : name("Not defined"), grade(150) {
    std::cout << "[Default Constructor called]          ";
    std::cout << "Created: " << name << ", Grade: " << grade << std::endl;
}

//Parameter constructor
Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade) {
    std::cout << "[Parametrized Constructor called]     ";
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    std::cout << "Created: " << name << ", Grade: " << grade << std::endl;
} 

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade) {
    std::cout << "[Copy constructor called]             ";
    std::cout << "Created: " << name << ", Grade: " << grade << std::endl;
}

// Destructor
Bureaucrat::~Bureaucrat() {
    std::cout << "[Destructor called]                   ";
    std::cout << "Destroyed: " << name << ", Grade: " << grade << std::endl;
}

//Assigment Operator
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this == &other)
		return *this;
	this->grade = other.getGrade();
	return *this;
}

//getName
const   std::string& Bureaucrat::getName() const {
    std::cout << "[getName() method called]             ";
    return (name);
}

//getGrade
int Bureaucrat::getGrade() const {
    std::cout << "[getGrade() method called]            ";
    return (grade);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}

//incrementGrade
void Bureaucrat::incrementGrade() {
    std::cout << "[incrementGrade() method called]      ";
    if (grade - 1 < 1)
        throw GradeTooHighException();
    else
        grade--;
    std::cout << "Changed grade for: " << name << ", Grade: " << grade << std::endl;
}

//decrementGrade
void Bureaucrat::decrementGrade() {
    std::cout << "[decrementGrade() method called]      ";
    if (grade + 1 > 150)
        throw GradeTooLowException();
    else
        grade++;
    std::cout << "Changed grade for: " << name << ", Grade: " << grade << std::endl;
}