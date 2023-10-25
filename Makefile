# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adesille <adesille@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/20 09:53:02 by adesille          #+#    #+#              #
#    Updated: 2023/10/25 16:25:23 by adesille         ###   ########.fr        #
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
		ft_strjoin.c ft_strtrim.c

OBJS = ${SRCS:.c=.o}

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

NAME = libft.a

all:	${NAME}

${NAME}:	${OBJS}
		ar rcs ${NAME} ${OBJS}

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
		${RM} ${OBJS}

fclean : clean
		${RM} ${NAME}

re :	fclean ${NAME}

test :
	clear
	${CC} ${Cflags} -c main.c -o main.o
	${CC} ${Cflags} -o main main.o -L. -lft -lbsd
	@echo "\n======================[   tests    ]======================"
	@./main
	@echo "\n======================[ all done ! ]======================"

.PHONY : all clean fclean re
