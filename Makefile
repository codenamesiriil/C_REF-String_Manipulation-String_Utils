NAME = cns_str_utl
CC = gcc
FLAGS = -Werror -Wextra -Wall -I./inc
RM = rm

SOURCE = cns_split.c   \
		 cns_strlen.c  \
		 cns_strtrim.c \
		 cns_substr.c  \
		 main.c

OBJS = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $@ $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re