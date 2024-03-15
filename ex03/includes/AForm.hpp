#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "../includes/Colors.hpp"
#include <stdexcept>

class Bureaucrat;

class AForm {
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExec;

    protected:
        void setSigned();

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
        AForm(void);                                                                 //Default Constructor METHOD
        AForm(const std::string name, int gradeToSign, int gradeToExec);             //Parameterized Constructor
        AForm(const AForm& other);                                                    //Copy Constructor METHOD
        virtual ~AForm();                                                                    //Destructor METHOD

        AForm & operator = (const AForm& other);                                      //Copy Assignment Operator METHOD
        const std::string& getName() const;
        int getGradeToSign()  const;
        int getgradeToExec()   const;
        bool isAFormSigned() const;

        
        virtual void beSigned(Bureaucrat const & bureaucrat) = 0;
        virtual void execute(Bureaucrat const & executor) const = 0;
    };

    std::ostream& operator<<(std::ostream& os, const AForm& AForm);

#endif

