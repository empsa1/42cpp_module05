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
    os << CYAN OVERLOAD_OPERATOR RESET << form.getName() << ", Form grade to Sign:  " << form.getGradeToSign() << " " << " Form grade to Execute: " << form.getgradeToExec() << std::endl;
    return os;
}

//method to sign the form
void Form::beSigned(Bureaucrat bureaucrat) {
    std::cout <<"is form signed: " << this->isSigned << std::endl;
    if (this->isSigned == true)
    {
        std::cout << MAGENTA "Form: " RESET << this->getName() << MAGENTA " is already signed!" RESET << std::endl;
    }
    else if (bureaucrat.getGrade() <= this->getGradeToSign())
    {
        this->isSigned = true;
        std::cout << MAGENTA "Form: " RESET << this->getName() << MAGENTA " was signed by Bureaucrat: " RESET  << bureaucrat.getName() << std::endl;
        std::cout <<"is form signed: " << this->isSigned << std::endl;
    }
    else
        throw GradeTooLowException();
}

bool    Form::isFormSigned() {
    if (this->isSigned)
        return true;
    return false;
}

