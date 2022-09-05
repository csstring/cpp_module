CXX= c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Harl.cpp
OBJS = ${SRCS:.cpp=.o}
RM = rm -f
NAME = harl_test

all : $(NAME)

$(NAME) : ${OBJS}
		${CXX} ${CXXFLAGS} ${OBJS} -o harl_test

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