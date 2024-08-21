
NAME = get_next_line.a
SRCS = get_next_line.c\
	   get_next_line_utils.c\

OBJS = $(SRCS:%.c=%.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all
	
.PHONY: all clean fclean re