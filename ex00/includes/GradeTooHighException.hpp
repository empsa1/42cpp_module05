#ifndef GRADE_TO_HIGH_EXCEPTION
# define GRADE_TO_HIGH_EXCEPTION

#include <stdexcept>

class GradeTooHighException : public std::exception {
public:
    virtual const char* error() const throw();
};

#endif