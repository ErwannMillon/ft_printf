SRCS := put_utils.c input_type_handlers.c formats_char.c formats_num.c formats_num2.c on_percent.c hex_convert.c
LIBFTSRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_islower.c ft_isprint.c ft_isupper.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
OBJS := $(SRCS:%.c=%.o)

%.o: %.c
	gcc -c $^
$(NAME): $(OBJS)
	ar -crs $(NAME) $(OBJS)
all: $(NAME)
libft.a:
	cd ./libft && make
	cd ./libft && mv libft.a ../
test: $(NAME) libft.a
	gcc -ggdb main.c $(SRCS) libft.a
asan: $(OBJS)
	gcc -fsanitize=address $(OBJS) -o $(NAME)
clean:
	rm -f $(OBJS) $(BOBJS)
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)
