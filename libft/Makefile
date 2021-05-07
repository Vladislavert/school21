CC		= gcc

NAME	= libft.a

SRC_DIR	= ./

OBJ_DIR	= ./obj/

SRCS	= $(SRC_DIR)ft_memset.c $(SRC_DIR)ft_bzero.c $(SRC_DIR)ft_memcpy.c $(SRC_DIR)ft_memccpy.c\
			  $(SRC_DIR)ft_memchr.c $(SRC_DIR)ft_memcmp.c $(SRC_DIR)ft_strlen.c $(SRC_DIR)ft_strlcpy.c\
			  $(SRC_DIR)ft_strchr.c  $(SRC_DIR)ft_strnstr.c $(SRC_DIR)ft_strncmp.c \
			  $(SRC_DIR)ft_isalpha.c $(SRC_DIR)ft_isdigit.c $(SRC_DIR)ft_isalnum.c $(SRC_DIR)ft_isascii.c $(SRC_DIR)ft_isprint.c \
			  $(SRC_DIR)ft_toupper.c $(SRC_DIR)ft_tolower.c $(SRC_DIR)ft_calloc.c $(SRC_DIR)ft_strdup.c $(SRC_DIR)ft_substr.c \
			  $(SRC_DIR)ft_putchar_fd.c $(SRC_DIR)ft_putstr_fd.c $(SRC_DIR)ft_putnbr_fd.c
 
OBJS	= $(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(SRCS))

CFLAGS	= #-Wall -Wextra -Werror #-g

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@ 

all:	$(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(NAME):	$(OBJ_DIR) $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	#rm -rf $(OBJS)
	rm -rf $(OBJ_DIR)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all