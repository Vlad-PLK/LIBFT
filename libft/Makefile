SRCS 	= ft_isdigit.c ft_memset.c  ft_isprint.c ft_strtrim.c ft_strmapi.c\
		  ft_strlcat.c ft_atoi.c ft_substr.c ft_strjoin.c ft_split.c ft_itoa.c\
		  ft_strlcpy.c ft_tolower.c ft_bzero.c ft_strlen.c ft_putchar_fd.c ft_putendl_fd.c\
		  ft_toupper.c ft_calloc.c ft_memchr.c ft_isalnum.c ft_putstr_fd.c ft_striteri.c\
		  ft_memcmp.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c ft_putnbr_fd.c\
		  ft_strnstr.c ft_isascii.c ft_memmove.c ft_strdup.c ft_strrchr.c

B_SRC	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c

OBJS	= ${SRCS:.c=.o}

B_OBJS	= ${B_SRC:.c=.o}

NAME	= libft.a

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
				ar src ${NAME} ${OBJS}

bonus:		${OBJS} ${B_OBJS}
				ar src ${NAME} ${OBJS} ${B_OBJS}

all:		${NAME}

clean:	
				${RM} ${OBJS} ${B_OBJS}

fclean:		clean
				${RM} ${NAME}

re:				fclean all

.PHONY:		all bonus clean fclean re
