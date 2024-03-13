    #include "../includes/AForm.hpp"
    #include "../includes/Bureaucrat.hpp"

    //Default Constructor
    AForm::AForm() : name("Not assigned"), isSigned(false), gradeToSign(150), gradeToExec(150) {
        std::cout << "[Default AForm Constructor called]          ";
        std::cout << "Created a AForm: " << name << ", Grade to sign: " << gradeToSign << ", Grade to execute: " << gradeToExec << std::endl;
    }

    //Parameter constructor
    AForm::AForm(const std::string name, int gradeToSign, int gradeToExec) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExec(gradeToExec) {
        std::cout << "[Parametrized AForm Constructor called]     ";
        if (gradeToSign < 1)
            throw GradeTooHighException();
        else if (gradeToExec < 1)
            throw GradeTooHighException();
        else if (gradeToSign > 150)
            throw GradeTooLowException();
        else if (gradeToExec > 150)
            throw GradeTooLowException();
        std::cout << "Created a AForm: " << name << ", Grade to sign: " << gradeToSign << ", Grade to execute: " << gradeToExec << std::endl;
    }

    //Copy constructor
    AForm::AForm(const AForm& other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExec(other.gradeToExec) {
        std::cout << "[AForm Copy constructor called]             ";
        std::cout << "Created a AForm: " << name << ", Grade to sign: " << gradeToSign << ", Grade to execute: " << gradeToExec << std::endl;
    }

    // Destructor
    AForm::~AForm() {
        std::cout << "[AForm Destructor called]                   ";
        std::cout << "Destroyed a AForm: " << name << ", Grade to sign: " << gradeToSign << ", Grade to execute: " << gradeToExec << std::endl;
    }

    //Assigment Operator
    AForm& AForm::operator=(const AForm& other) {
        if (this == &other)
            return *this;
        return *this;
    }

    //getName
    const   std::string& AForm::getName() const {
        std::cout << "[getName() method called]             ";
        return (name);
    }

    //setSIgned
    void AForm::setSigned() {
        this->isSigned = true;
    }

    //getGradeToSIgn
    int AForm::getGradeToSign() const {
        std::cout << "[getGradeToSign() method called]            ";
        return (gradeToSign);
    }

    //getGradeToExec
    int AForm::getgradeToExec() const {
        std::cout << "[getGradeToExec() method called]            ";
        return (gradeToExec);
    }

    //overload operator
    std::ostream& operator<<(std::ostream& os, const AForm& AForm) {
        os << AForm.getName() << ", AForm grade to sign:  " << AForm.getGradeToSign() << "AForm grade to exec: " << AForm.getgradeToExec() << std::endl;
        return os;
    }

    bool    AForm::isAFormSigned() const {
        if (this->isSigned)
            return true;
        return false;
    }

