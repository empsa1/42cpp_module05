#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Form;

class Bureaucrat {
private:
    const std::string name;
    int grade;

public:
    Bureaucrat(void); 
    Bureaucrat(const std::string& name, int grade);     //Default Constructor1
    Bureaucrat(const Bureaucrat& other);                //Copy Constructor

    ~Bureaucrat();                                      //Destructor

    Bureaucrat & operator = (const Bureaucrat& other);     //Copy Operator

    const std::string& getName() const;
    int getGrade()  const;
    void incrementGrade();
    void decrementGrade();
    void signForm(Form form);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif