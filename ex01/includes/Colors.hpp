#ifndef COLORS_HPP
# define COLORS_HPP

// Define ANSI escape codes for text colors
#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

// Default Messages optimized
#define GRADE_TO_HIGH           "Grade is too high!"
#define GRADE_TO_LOW            "Grade is too low!"
#define DEFAULT_CONSTRUCTOR     "[Default Constructor called]       "
#define PARAMTER_CONSTRUCTOR    "[Parameter Constructor called]     "
#define COPY_CONSTRUCTOR        "[Copy Constructor called]          "
#define DESTRUCTOR              "[Destructor called]                "
#define ASSIGMENT_OPERATOR      "[Assigment Operator called]        "
#define GET_NAME                "[getName() method called]          "
#define GET_GRADE               "[getGrade() method called]         "
#define INCREMENT_GRADE         "[incrementGrade() method called]   "
#define DECREMENT_GRADE         "[decrementGrade() method called]   "
#define NO_EXCEPTION_FOUND      "***************No Exception was caught!**************"
#define SIGN_FORM               "[signForm() method called]         "
#define GET_EXEC_GRADE          "[getGradeToExec() called]          "
#define GET_GRADE_TO_SIGN       "[getGradeToSign() called]          "
#define OVERLOAD_OPERATOR       "[Overload operator called]         "

#endif