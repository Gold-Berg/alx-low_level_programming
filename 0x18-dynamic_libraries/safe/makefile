CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
SRCS = _putchar.c _islower.c _isalpha.c _abs.c _isupper.c _isdigit.c _strlen.c \
       _puts.c _strcpy.c _atoi.c _strcat.c _strncat.c _strncpy.c _strcmp.c \
       _memset.c _memcpy.c _strchr.c _strspn.c _strpbrk.c _strstr.c
OBJS = $(SRCS:.c=.o)
NAME = libdynamic.so

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -shared -o $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -fPIC -c $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
