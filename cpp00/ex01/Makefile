CXX= c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = PhoneBook.cpp Contact.cpp main.cpp
OBJS = ${SRCS:.cpp=.o}
RM = rm -f
NAME = phonebook

all : $(NAME)

$(NAME) : ${OBJS}
		${CXX} ${CXXFLAGS} ${OBJS} -o phonebook

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