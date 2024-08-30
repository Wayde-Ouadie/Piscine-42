SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
INCL = includes
OBJS = srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o
NAME = libft.a
LIBC = ar rc
LIBR = ranlib
CC = cc
RM = rm -rf
FLAGS = -Wall -Wextra -Werror

all : ${NAME}

${NAME} : ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}

%.o: %.c
	${CC} ${FLAGS} -c $< -o $@ -I ${INCL}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
