#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Bureaucrat;

class AForm {
private:
    const std::string name;
    bool isSigned;
    const int gradeToSign;
    const int gradeToExec;
    
public:
    AForm(void);                                                                 //Default Constructor METHOD
    AForm(const std::string name, int gradeToSign, int gradeToExec);             //Parameterized Constructor
    AForm(const AForm& other);                                                    //Copy Constructor METHOD
    ~AForm();                                                                    //Destructor METHOD

    AForm & operator = (const AForm& other);                                      //Copy Assignment Operator METHOD
    const std::string& getName() const;
    int getGradeToSign()  const;
    int getgradeToExec()   const;
    bool isAFormSigned();

    
    virtual void beSigned(Bureaucrat& bureaucrat) = 0;
    virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& AForm);

#endif