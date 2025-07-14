NAME = libftprintf.a

LIBFT = libft/libft.a

CFLAGS = -Wall -Wextra -Werror -I.

CC = cc

SRCS = ft_printf.c ft_functions.c

OBJS = $(SRCS:.c=.o)
.SECONDARY: ${OBJS}

all: $(LIBFT) $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) libft/*.o

$(LIBFT):
	$(MAKE) -C libft 

clean: 
	$(MAKE) -C libft clean
	rm -f $(OBJS) 

fclean: clean
	rm -f $(LIBFT)
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean