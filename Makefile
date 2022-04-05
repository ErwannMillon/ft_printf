SRCS := put_utils.c input_type_handlers.c formats_char.c formats_num.c formats_num2.c ft_printf.c hex_convert.c parse_utils.c
NAME = libftprintf.a 
CFLAGS = -Wall -Wextra -Werror
OBJS := $(SRCS:%.c=%.o)

%.o: %.c
	gcc $(CFLAGS) -I./libft -c $^

all: $(NAME)

$(NAME): libft $(OBJS) 
	ar -crs $(NAME) $(OBJS)
libft:
	$(MAKE) -C ./libft bonus
	cp libft/libft.a $(NAME)
test: $(NAME)
	gcc -ggdb main.c $(SRCS) -Werror -Wextra -Wall libft.a
asan: $(OBJS)
	gcc -fsanitize=address $(OBJS) -o $(NAME)
git:
	git add ./libft $(SRCS) Makefile
clean:
	$(MAKE) -C ./libft clean
	rm -f $(OBJS) $(BOBJS)
fclean: clean
	$(MAKE) -C ./libft fclean
	rm -f $(NAME)
re: fclean $(NAME)

.PHONY:	all clean fclean re libft
