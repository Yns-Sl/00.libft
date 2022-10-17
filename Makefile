# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 11:42:28 by yes-slim          #+#    #+#              #
#    Updated: 2022/10/17 16:38:00 by yes-slim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc 

CFLAGS = -Wall -Werror -Wextra -c

NAME = libft.a

LIBF = ar rc

DEL = rm -rf

CSRCS = ft_isalpha.c	ft_toupper.c	\
		ft_isdigit.c	ft_tolower.c	\
		ft_isalnum.c	ft_strchr.c		\
		ft_isascii.c	ft_strrchr.c	\
		ft_isprint.c	ft_strncmp.c	\
		ft_memchr.c		ft_memset.c		\
		ft_memcpy.c		ft_memmove.c	\
		ft_memcmp.c		ft_atoi.c		\
		ft_strlcat.c	ft_strlcpy.c	\
		ft_strlen.c		ft_strnstr.c	\
		ft_calloc.c		ft_bzero.c		\
		ft_strdup.c		ft_substr.c		\
		ft_strjoin.c	ft_strtrim.c	\
		ft_itoa.c

OBJF =	ft_isalpha.o	ft_toupper.o	\
		ft_isdigit.o	ft_tolower.o	\
		ft_isalnum.o	ft_strchr.o		\
		ft_isascii.o	ft_strrchr.o	\
		ft_isprint.o	ft_strncmp.o	\
		ft_memchr.o		ft_memset.o		\
		ft_memcpy.o		ft_memmove.o	\
		ft_memcmp.o		ft_atoi.o		\
		ft_strlcat.o	ft_strlcpy.o	\
		ft_strlen.o		ft_strnstr.o	\
		ft_calloc.o		ft_bzero.o		\
		ft_strdup.o		ft_substr.o		\
		ft_strjoin.o	ft_strtrim.o	\
		ft_itoa.o
		



$(NAME) :
	$(LIBF) $(NAME) $(OBJF)

all : 
	$(CC) $(CFLAGS) $(CSRCS)
	

clean :
	$(DEL) $(OBJF)

fclean :
	$(DEL) $(OBJF) $(NAME)

re : fclean all
