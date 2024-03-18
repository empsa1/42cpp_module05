#ifndef COLORS_HPP
#define COLORS_HPP

// Define ANSI escape codes for text colors
#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

// Define macro to control debug mode
#ifndef DEBUG_MODE
#define DEBUG_MODE 0 // Set to 1 to enable debug mode by default
#endif

#if DEBUG_MODE == 1
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
#define FORM_NOT_SIGNED         "[The form is not yet signed]       "
#define CANT_EXEC_FORM          "[No permissions to exec form]      "
#define INVALID_FORM            "[Form callout doesnt exist]        "
#define INTERN_ERROR            "[Could not create new Intern]      "
#else
// Define default messages when debug mode is disabled
#define GRADE_TO_HIGH           "Grade is too high!"
#define GRADE_TO_LOW            "Grade is too low!"
#define DEFAULT_CONSTRUCTOR     ""
#define PARAMTER_CONSTRUCTOR    ""
#define COPY_CONSTRUCTOR        ""
#define DESTRUCTOR              ""
#define ASSIGMENT_OPERATOR      ""
#define GET_NAME                ""
#define GET_GRADE               ""
#define INCREMENT_GRADE         ""
#define DECREMENT_GRADE         ""
#define NO_EXCEPTION_FOUND      "***************No Exception was caught!**************"
#define SIGN_FORM               ""
#define GET_EXEC_GRADE          ""
#define GET_GRADE_TO_SIGN       ""
#define OVERLOAD_OPERATOR       ""
#define FORM_NOT_SIGNED         "[The form is not yet signed]       "
#define CANT_EXEC_FORM          "[No permissions to exec form]      "
#define INVALID_FORM            "[Form callout doesnt exist]        "
#define INTERN_ERROR            "[Could not create new Intern]      "
#endif

#endif // COLORS_HPP
