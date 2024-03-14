#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"

//Default Constructor
Form::Form() : name("Not assigned"), isSigned(false), gradeToSign(150), gradeToExec(150) {
    std::cout << YELLOW DEFAULT_CONSTRUCTOR RESET << "Created a Form: " << name << ", Grade to sign: " << gradeToSign << ", Grade to execute: " << gradeToExec << std::endl;
}

//Parameter constructor
Form::Form(const std::string name, int gradeToSign, int gradeToExec) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExec(gradeToExec) {
    if (gradeToSign < 1)
        throw GradeTooHighException();
    else if (gradeToExec < 1)
        throw GradeTooHighException();
    else if (gradeToSign > 150)
        throw GradeTooLowException();
    else if (gradeToExec > 150)
        throw GradeTooLowException();
    std::cout << YELLOW PARAMTER_CONSTRUCTOR RESET << "Created a Form: " << name << ", Grade to sign: " << gradeToSign << ", Grade to execute: " << gradeToExec << std::endl;
}

//Copy constructor
Form::Form(const Form& other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExec(other.gradeToExec) {
    std::cout << YELLOW COPY_CONSTRUCTOR RESET << "Created a Form: " << name << ", Grade to sign: " << gradeToSign << ", Grade to execute: " << gradeToExec << std::endl;
}

// Destructor
Form::~Form() {
    std::cout << YELLOW DESTRUCTOR RESET << "Destroyed a Form: " << name << ", Grade to sign: " << gradeToSign << ", Grade to execute: " << gradeToExec << std::endl;
}

//Assigment Operator
Form& Form::operator=(const Form& other) {
    std::cout << YELLOW ASSIGMENT_OPERATOR RESET;
    if (this == &other)
		return *this;
	return *this;
}

//getName
const   std::string& Form::getName() const {
    std::cout << GREEN GET_NAME RESET;    
    return (name);
}

//getGradeToSIgn
int Form::getGradeToSign() const {
    std::cout << GREEN GET_GRADE_TO_SIGN RESET;
    return (gradeToSign);   
}

//getGradeToExec
int Form::getgradeToExec() const {
    std::cout << GREEN GET_EXEC_GRADE RESET;
    return (gradeToExec);
}

//overload operator
std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << CYAN OVERLOAD_OPERATOR RESET << form.getName() << ", Form grade to sign:  " << form.getGradeToSign() << "Form grade to exec: " << form.getgradeToExec() << std::endl;
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

