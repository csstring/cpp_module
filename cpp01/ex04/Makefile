CXX= c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Replace.cpp
OBJS = ${SRCS:.cpp=.o}
RM = rm -f
NAME = sed_is_trash

all : $(NAME)

$(NAME) : ${OBJS}
		${CXX} ${CXXFLAGS} ${OBJS} -o sed_is_trash

%.o : %.cpp
		${CXX} ${CXXFLAGS} -c $< -o ${<:.cpp=.o}

clean :
		${RM} ${OBJS}

fclean : clean
		${RM} $(NAME)
re : 
	${MAKE} fclean 
	${MAKE} all

.PHONY: all clean fclean re