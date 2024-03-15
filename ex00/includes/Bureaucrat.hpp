#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include "../includes/Colors.hpp"

class GradeTooHighException : public std::exception {
public:
    virtual const char* error() const throw();
};

class GradeTooLowException : public std::exception {
public:
    virtual const char* error() const throw();
};

class Bureaucrat {
private:
    const std::string name;
    int grade;

public:
    Bureaucrat(void); 
    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat& other);
    ~Bureaucrat();
    Bureaucrat & operator = (const Bureaucrat& other);

    const std::string& getName() const;
    int getGrade()  const;
    void incrementGrade();
    void decrementGrade();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif