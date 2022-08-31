CXX= c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = megaphone.c
OBJS = ${SRCS:.c=.o}
RM = rm -f
NAME = megaphone

all : $(NAME)

$(NAME) : ${OBJS}
		${CXX} ${CXXFLAGS} ${OBJS} -o megaphone

%.o : %.c
		${CXX} ${CXXFLAGS} -c $< -o ${<:.c=.o}

clean :
		${RM} ${OBJS}

fclean : clean
		${RM} $(NAME)
re : 
	${MAKE} fclean 
	${MAKE} all

.PHONY: all clean fclean re