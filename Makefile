SRCS =	ft_printf.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_putaddress.c \
	ft_putnbr.c \
	ft_putnbr_hex.c \

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: ${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
			ar -rcs $(NAME) $(OBJS)

clean:
			${RM} ${OBJS}

fclean: clean
			${RM} ${NAME}

re: fclean all

.PHONY:		all clean fclean re
