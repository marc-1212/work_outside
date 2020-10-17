NAME	= 	infinitadd

SRC	=	src/main.c 		\
		src/add.c		\
		src/my_putchar.c	\
		src/my_putstr.c		\
		src/my_strlen.c

CFLAGS	=	-g 

OBJS	=	$(SRC:.c=.o)

cc 	=	gcc

RM	= 	rm -rf

all:		$(NAME)


$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS)

clean:
		$(RM) $(NAME)

fclean:		clean
		$(RM)  $(OBJS)

re:		fclean all
