#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form {
private:
    const std::string name;
    bool isSigned;
    const int gradeToSign;
    const int gradeToExec;
    
public:
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