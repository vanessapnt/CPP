NAME = violence

SRCS = HumanA.cpp \
	HumanB.cpp \
	main.cpp \
	Weapon.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++
CCFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CCFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re