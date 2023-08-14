SRCS 	=	char/ft_isalnum.c \
			char/ft_isalpha.c \
			char/ft_isdigit.c  \
			char/ft_isascii.c  \
			char/ft_isprint.c  \
			char/ft_tolower.c  \
			char/ft_toupper.c \
			fds/ft_putchar_fd.c \
			fds/ft_putendl_fd.c \
			fds/ft_putnbr_fd.c \
			fds/ft_putstr_fd.c \
			int/ft_atoi.c \
			int/ft_itoa.c \
			strings/ft_split.c \
			strings/ft_strchr.c \
			strings/ft_strdup.c \
			strings/ft_striteri.c \
			strings/ft_strjoin.c \
			strings/ft_strlcat.c \
			strings/ft_strlcpy.c \
			strings/ft_strlen.c \
			strings/ft_strmapi.c \
			strings/ft_strncmp.c \
			strings/ft_strnstr.c \
			strings/ft_strtrim.c \
			strings/ft_substr.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \

B_SRC	= 	lists/ft_lstnew_bonus.c \
			lists/ft_lstadd_front_bonus.c \
			lists/ft_lstsize_bonus.c \
			lists/ft_lstlast_bonus.c \
			lists/ft_lstadd_back_bonus.c \
			lists/ft_lstdelone_bonus.c \
			lists/ft_lstclear_bonus.c

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
