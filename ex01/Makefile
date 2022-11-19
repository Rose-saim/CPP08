
NAME	=	a.out

CXX		=	clang++ -std=c++98

RM		=	rm -f

CXXFLAGS	=	-Wall -Wextra -Werror


SRCS	=	./main.cpp Span.cpp

OBJS	=	$(SRCS:.cpp=.o)


all:		$(NAME)
$(NAME):	$(OBJS)
			${CXX} ${CXXFLAGS} ${LFLAGS} -o ${NAME} ${OBJS} ${LIBFT}

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re f