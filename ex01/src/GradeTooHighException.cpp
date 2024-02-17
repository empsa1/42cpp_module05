#include "../includes/GradeTooHighException.hpp"

const char* GradeTooHighException::error() const throw() {
    return "Grade is too high";
}