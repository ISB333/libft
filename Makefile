# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adesille <adesille@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/20 09:53:02 by adesille          #+#    #+#              #
#    Updated: 2024/05/21 12:14:15 by adesille         ###   ########.fr        #
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

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS = 	${SRCS:.c=.o} 
OBJS_BONUS = ${BONUS:.c=.o}

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

NAME = libft.a

######################## LIBRARY ########################

FT_PRINTF_DIR = ft_printf
FT_PRINTF = $(FT_PRINTF_DIR)/libftft_printf.a

######################## RULES ########################

all :	${NAME}

${NAME}:	${OBJS} $(FT_PRINTF)
		ar rcs ${NAME} $(FT_PRINTF) ${OBJS}

bonus : ${OBJS_BONUS}
		ar rcs $(NAME) $(OBJS_BONUS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(FT_PRINTF):
	@$(MAKE) -C $(FT_PRINTF_DIR)

clean :
		${RM} ${OBJS} $(OBJS_BONUS)
		$(MAKE) -C $(LIBFT_DIR) fclean

fclean : clean
		${RM} ${NAME}

re :	fclean all
	
.PHONY : all clean fclean re bonus
