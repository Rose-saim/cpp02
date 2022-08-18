SRCS			= main.cpp Fixed.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -std=c++98 -Wall -Wextra -Werror

NAME			= Phonebook

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

test:			$(NAME)
				./Phonebook "shhhhh... I think the students are asleep..."
				./Phonebook Damnit " ! " "Sorry students, I thought this thing was off."
				./Phonebook

.PHONY:			all clean fclean re test
