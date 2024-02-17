#include "../includes/Bureaucrat.hpp"
#include "../includes/GradeTooHighException.hpp"
#include "../includes/GradeTooLowException.hpp"
#include <cstdlib>

//Default Constructor
Bureaucrat::Bureaucrat(void) : name("Not defined"), grade(150) {
    std::cout << "[Default Bureaucrat Constructor called]          ";
    std::cout << "Created Bureaucrat: " << name << ", Grade: " << grade << std::endl;
}

//Parameter constructor
Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade) {
    std::cout << "[Parametrized Bureaucrat Constructor called]     ";
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    std::cout << "Created Bureaucrat: " << name << ", Grade: " << grade << std::endl;
} 

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade) {
    std::cout << "[Bureaucrat Copy constructor called]             ";
    std::cout << "Created Bureaucrat: " << name << ", Grade: " << grade << std::endl;
}

// Destructor
Bureaucrat::~Bureaucrat() {
    std::cout << "[Bureaucrat Destructor called]                   ";
    std::cout << "Destroyed Bureaucrat: " << name << ", Grade: " << grade << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other) {
        this->grade = other.grade;
    }
    return *this;
}

//getName
const   std::string& Bureaucrat::getName() const {
    std::cout << "[Bureaucrat getName() method called]             ";
    return (name);
}

//getGrade
int Bureaucrat::getGrade() {
    std::cout << "[Bureaucrat getGrade() method called]            ";
    return (grade);
}

//incrementGrade
void Bureaucrat::incrementGrade() {
    std::cout << "[Bureaucrat incrementGrade() method called]      ";
    if (grade - 1 < 1)
        throw GradeTooHighException();
    else
        grade--;
    std::cout << "Changed grade for Bureaucrat: " << name << ", Grade: " << grade << std::endl;
}

//decrementGrade
void Bureaucrat::decrementGrade() {
    std::cout << "[Bureaucrat decrementGrade() method called]      ";
    if (grade + 1 > 150)
        throw GradeTooLowException();
    else
        grade++;
    std::cout << "Changed grade for Bureaucrat: " << name << ", Grade: " << grade << std::endl;
}