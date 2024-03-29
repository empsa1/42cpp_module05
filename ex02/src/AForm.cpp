#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/Colors.hpp"
//Default Constructor
AForm::AForm() : name("Not assigned"), isSigned(false), gradeToSign(150), gradeToExec(150) {
    std::cout << YELLOW DEFAULT_CONSTRUCTOR RESET << "Created a AForm: " << name << ", Grade to sign: " << gradeToSign << ", Grade to execute: " << gradeToExec << std::endl;
}

//Parameter constructor
AForm::AForm(const std::string name, int gradeToSign, int gradeToExec) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExec(gradeToExec) {
    if (gradeToSign < 1)
        throw GradeTooHighException();
    else if (gradeToExec < 1)
        throw GradeTooHighException();
    else if (gradeToSign > 150)
        throw GradeTooLowException();
    else if (gradeToExec > 150)
        throw GradeTooLowException();
     std::cout << YELLOW PARAMTER_CONSTRUCTOR RESET << "Created a AForm: " << name << ", Grade to sign: " << gradeToSign << ", Grade to execute: " << gradeToExec << std::endl;
}

//Copy constructor
AForm::AForm(const AForm& other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExec(other.gradeToExec) {
    std::cout << YELLOW COPY_CONSTRUCTOR RESET<< "Created a AForm: " << name << ", Grade to sign: " << gradeToSign << ", Grade to execute: " << gradeToExec << std::endl;
}

// Destructor
AForm::~AForm() {
    std::cout << YELLOW DESTRUCTOR RESET << "Destroyed a AForm: " << name << ", Grade to sign: " << gradeToSign << ", Grade to execute: " << gradeToExec << std::endl;
}

//Assigment Operator
AForm& AForm::operator=(const AForm& other) {
    std::cout << YELLOW ASSIGMENT_OPERATOR RESET << std::endl;
    if (this == &other)
        return *this;
    return *this;
}

//getName
const   std::string& AForm::getName() const {
    std::cout << GREEN GET_NAME RESET;
    return (name);
}

//setSIgned
void AForm::setSigned() {
    this->isSigned = true;
}

//getGradeToSIgn
int AForm::getGradeToSign() const {
    std::cout << GREEN GET_GRADE_TO_SIGN RESET;
    return (gradeToSign);
}

//getGradeToExec
int AForm::getgradeToExec() const {
    std::cout << GREEN GET_EXEC_GRADE RESET;
    return (gradeToExec);
}

//overload operator
std::ostream& operator<<(std::ostream& os, const AForm& AForm) {
    os << CYAN OVERLOAD_OPERATOR RESET << AForm.getName() << ", AForm grade to Sign:  " << AForm.getGradeToSign() << " AForm grade to Execute: " << AForm.getgradeToExec() << std::endl;
    return os;
}

bool    AForm::isAFormSigned() const {
    if (this->isSigned)
        return true;
    return false;
}

