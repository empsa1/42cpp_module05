#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

const char* GradeTooHighException::error() const throw() {
    static std::string infoMsg = RED;
    infoMsg += GRADE_TO_HIGH;
    infoMsg += RESET;
    return infoMsg.c_str();
}

const char* GradeTooLowException::error() const throw() {
    static std::string infoMsg = RED;
    infoMsg += GRADE_TO_LOW;
    infoMsg += RESET;
    return infoMsg.c_str();
}
//Default Constructor
Bureaucrat::Bureaucrat(void) : name("Not defined"), grade(150) {
    static std::string infoMsg = YELLOW;
    infoMsg += DEFAULT_CONSTRUCTOR;
    infoMsg += RESET;
    std::cout << infoMsg.c_str() << "Created: " << name << ", Grade: " << grade << std::endl;
}

//Parameter constructor
Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade) {
    static std::string infoMsg = YELLOW;
    infoMsg += PARAMTER_CONSTRUCTOR;
    infoMsg += RESET;
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    std::cout << infoMsg.c_str() << "Created: " << name << ", Grade: " << grade << std::endl;
} 

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade) {
    static std::string infoMsg = YELLOW;
    infoMsg += COPY_CONSTRUCTOR;
    infoMsg += RESET;
    std::cout << infoMsg.c_str() << "Created: " << name << ", Grade: " << grade << std::endl;
}

// Destructor
Bureaucrat::~Bureaucrat() {
    static std::string infoMsg = YELLOW;
    infoMsg += DESTRUCTOR;
    infoMsg += RESET;
    std::cout << infoMsg.c_str() << "Destroyed: " << name << ", Grade: " << grade << std::endl;
}

//Assigment Operator
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    static std::string infoMsg = YELLOW;
    infoMsg += DESTRUCTOR;
    infoMsg += RESET;
    std::cout << infoMsg.c_str() << std::endl;
    if (this == &other)
		return *this;
	this->grade = other.getGrade();
	return *this;
}

//getName
const   std::string& Bureaucrat::getName() const {
    static std::string infoMsg = GREEN;
    infoMsg += GET_NAME;
    infoMsg += RESET;
    std::cout << infoMsg.c_str() << std::endl;
    return (name);
}

//getGrade
int Bureaucrat::getGrade() const {
    static std::string infoMsg = GREEN;
    infoMsg += GET_GRADE;
    infoMsg += RESET;
    std::cout << infoMsg.c_str() << std::endl;
    return (grade);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}

//incrementGrade
void Bureaucrat::incrementGrade() {
    static std::string infoMsg = GREEN;
    infoMsg += INCREMENT_GRADE;
    infoMsg += RESET;
    if (grade - 1 < 1)
        throw GradeTooHighException();
    else
        grade--;
    std::cout << infoMsg.c_str() << "Changed grade for: " << name << ", Grade: " << grade << std::endl;
}

//decrementGrade
void Bureaucrat::decrementGrade() {
    static std::string infoMsg = GREEN;
    infoMsg += DECREMENT_GRADE;
    infoMsg += RESET;
    if (grade + 1 > 150)
        throw GradeTooLowException();
    else
        grade++;
    std::cout << infoMsg.c_str() << "Changed grade for: " << name << ", Grade: " << grade << std::endl;
}

//method to sign forms
void Bureaucrat::signForm(Form form) {
    static std::string infoMsg = GREEN;
    infoMsg += SIGN_FORM;
    infoMsg += RESET;
    if (form.isFormSigned() == true)
    {
        std::cout << infoMsg.c_str() << "Form: " << form.getName() << " is already signed!" << std::endl;
    }
    else if (this->getGrade() < form.getGradeToSign())
    {
        form.beSigned(*this);
        std::cout << infoMsg.c_str() << "Form: " << form.getName() << " was signed by Bureaucrat: " << this->getName() << std::endl;
    }
    else
        std::cout << infoMsg.c_str() << "Form: " << form.getName() << " was not signed due to Bureacrat: " << this->getName() << " not having a high enough grade!" << std::endl;
}