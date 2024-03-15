#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "../includes/Colors.hpp"

class Bureaucrat;

class Form {
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExec;
        
    public:
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return RED GRADE_TO_HIGH RESET;
                }
        };

        class GradeTooLowException : public std::exception
            {
                public:
                    virtual const char* what() const throw()
                    {
                        return RED GRADE_TO_LOW RESET;
                    }
            };

        class CantExecException : public std::exception
            {
                public:
                    virtual const char* what() const throw()
                    {
                        return RED CANT_EXEC_FORM RESET;
                    }
            };

        class FormNotSignedException : public std::exception
            {
                public:
                    virtual const char* what() const throw()
                    {
                        return FORM_NOT_SIGNED RESET;
                    }
            };

        Form(void);                                                                 //Default Constructor METHOD
        Form(const std::string name, int gradeToSign, int gradeToExec);             //Parameterized Constructor
        Form(const Form& other);                                                    //Copy Constructor METHOD
        ~Form();                                                                    //Destructor METHOD
        Form & operator = (const Form& other);                                      //Copy Assignment Operator METHOD
        
        const std::string& getName() const;
        int getGradeToSign()  const;
        int getgradeToExec()   const;
        void beSigned(Bureaucrat bureaucrat);
        bool isFormSigned();
};

std::ostream& operator<<(std::ostream& os, const Form& Form);

#endif