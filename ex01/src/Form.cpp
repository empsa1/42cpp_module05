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

//Assigment Operator
Form& Form::operator=(const Form& other) {
    if (this == &other)
		return *this;
	return *this;
}

//getName
const   std::string& Form::getName() const {
    std::cout << "[getName() method called]             ";
    return (name);
}

//getGradeToSIgn
int Form::getGradeToSign() const {
    std::cout << "[getGradeToSign() method called]            ";
    return (gradeToSign);
}

//getGradeToExec
int Form::getgradeToExec() const {
    std::cout << "[getGradeToExec() method called]            ";
    return (gradeToExec);
}

//overload operator
std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << form.getName() << ", Form grade to sign:  " << form.getGradeToSign() << "Form grade to exec: " << form.getgradeToExec() << std::endl;
    return os;
}

//method to sign the form
void Form::beSigned(Bureaucrat bureaucrat) {
    if (this->isSigned == true)
    {
        std::cout << "Form: " << this->getName() << " is already signed!" << std::endl;
    }
    else if (bureaucrat.getGrade() < this->getGradeToSign())
    {
        this->isSigned = true;
        std::cout << "Form: " << this->getName() << " was signed by Bureaucrat: " << bureaucrat.getName() << std::endl;
    }
    else
        std::cout << "Form: " << this->getName() << " was not signed due to Bureacrat: " << bureaucrat.getName() << " not having a high enough grade!" << std::endl;
}

bool    Form::isFormSigned() {
    if (this->isSigned)
        return true;
        return false;
}

