#include "../includes/Form.hpp"
#include "../includes/GradeTooHighException.hpp"
#include "../includes/GradeTooLowException.hpp"

//Default Constructor
Form::Form() : isSigned(false), name("Not assigned"), gradeToSign(150), gradeToExec(150) {
    std::cout << "[Default Form Constructor called]          ";
    std::cout << "Created a Form: " << name << ", Grade to sign: " << gradeToSign << ", Grade to execute: " << gradeToExec << std::endl;
}

//Parameter constructor
Form::Form(const std::string name, int gradeToSign, int gradeToExec) : name(name), gradeToSign(gradeToSign), gradeToExec(gradeToExec), isSigned(false) {
    std::cout << "[Parametrized Form Constructor called]     ";
    if (gradeToSign < 1)
        throw GradeTooHighException();
    else if (gradeToExec < 1)
        throw GradeTooHighException();
    else if (gradeToSign > 150)
        throw GradeTooLowException();
    else if (gradeToExec > 150)
        throw GradeTooLowException();
    std::cout << "Created a Form: " << name << ", Grade to sign: " << gradeToSign << ", Grade to execute: " << gradeToExec << std::endl;
}

// Copy constructor
Form::Form(const Form& other) : name(other.name), gradeToSign(other.gradeToSign), gradeToExec(other.gradeToExec), isSigned(other.isSigned) {
    std::cout << "[Form Copy constructor called]             ";
    std::cout << "Created a Form: " << name << ", Grade to sign: " << gradeToSign << ", Grade to execute: " << gradeToExec << std::endl;
}

// Destructor
Form::~Form() {
    std::cout << "[Form Destructor called]                   ";
    std::cout << "Destroyed a Form: " << name << ", Grade to sign: " << gradeToSign << ", Grade to execute: " << gradeToExec << std::endl;
}

Form& Form::operator=(const Form& other) : this->gradeToSign = other.gradeToSign, this->gradeToExec = other.gradeToExec {
    if (this != &other) {
        this->isSigned = other.isSigned;
    }
    return *this;
}

