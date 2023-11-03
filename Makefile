# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adesille <adesille@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/20 09:53:02 by adesille          #+#    #+#              #
#    Updated: 2023/11/03 17:06:08 by adesille         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		ft_isascii.c ft_isprint.c ft_strlen.c \
		ft_memset.c  ft_bzero.c   ft_memcpy.c \
		ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_atoi.c  ft_strnstr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_strmapi.c ft_striteri.c \
		ft_itoa.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		ft_lstlast.c

OBJS = 	${SRCS:.c=.o} ${BONUS:.c=.o}

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

NAME = libft.a

all :	${NAME}

${NAME}:	${OBJS}
		ar rcs ${NAME} ${OBJS}

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
		${RM} ${OBJS}

fclean : clean
		${RM} ${NAME}

re :	fclean ${NAME}

bonus : ${OBJS}

# Uncomment the lines below if you want to build a shared library
# so :
# 	$(CC) -nostartfiles -fPIC $(CFLAGS) $(OBJS)
# 	gcc -nostartfiles -shared -o libft.so $(OBJS)

.PHONY : all clean fclean re bonus so

