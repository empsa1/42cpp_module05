#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include "../includes/Colors.hpp"

class Form;

class Bureaucrat {
private:
    const std::string name;
    int grade;

public:
    class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw()
            {
                return RED GRADE_TO_HIGH RESET;
            }
        };

    class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw()
            {
                return RED GRADE_TO_LOW RESET;
            }
        };
    Bureaucrat(void); 
    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat& other);
    ~Bureaucrat();
    Bureaucrat & operator = (const Bureaucrat& other);

    const std::string& getName() const;
    int getGrade()  const;
    void setGrade(int grade);
    void incrementGrade();
    void decrementGrade();
    void signForm(Form& form);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif