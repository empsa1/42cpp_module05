#ifndef GRADE_TO_LOW_EXCEPTION
# define GRADE_TO_LOW_EXCEPTION

#include <stdexcept>

class GradeTooLowException : public std::exception {
public:
    virtual const char* error() const throw();
};

#endif