#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Form {
private:
    const std::string name;
    bool isSigned = false;
    const int gradeToSign;
    const int gradeToExec;
    
public:
    Form(void);                                                                 //Default Constructor METHOD
    Form(const std::string name, int gradeToSign, int gradeToExec);             //Parameterized Constructor
    Form(const Form& other);                                                    //Copy Constructor METHOD

    ~Form();                                                                    //Destructor METHOD

    Form & operator = (const Form& other);                                      //Copy Assignment Operator METHOD
};

#endif