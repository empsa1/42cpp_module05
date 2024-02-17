#include "../includes/GradeTooLowException.hpp"

const char* GradeTooLowException::error() const throw() {
    return "Grade is too low";
}