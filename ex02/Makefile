SRC = src/Bureaucrat.cpp src/AForm.cpp \
	src/PresidentialPardonForm.cpp src/RobotomyRequestForm.cpp \
	src/ShrubberyCreationForm.cpp src/main.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = FormFiesta

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re