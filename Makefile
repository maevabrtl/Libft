# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberthai <mberthai@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/27 12:31:17 by mberthai          #+#    #+#              #
#    Updated: 2021/01/27 12:31:17 by mberthai         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LATER = ft_strrchr.c ft_strnstr.c ft_memccpy.c ft_strchr.c

SRC = libft.h \
ft_toupper.c \
ft_tolower.c \
ft_substr.c \
ft_strtrim.c \
ft_strncmp.c \
ft_strmapi.c \
ft_strlen.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_strjoin.c \
ft_strdup.c \
ft_split.c \
ft_putstr_fd.c \
ft_putnbr_fd.c \
ft_putendl_fd.c \
ft_putchar_fd.c \
ft_memset.c \
ft_memmove.c \
ft_memcpy.c \
ft_memcmp.c \
ft_lstsize.c \
ft_lstnew.c \
ft_lstmap.c \
ft_lstlast.c \
ft_lstiter.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_lstadd_front.c \
ft_lstadd_back.c \
ft_itoa.c \
ft_isprint.c \
ft_isdigit.c \
ft_isascii.c \
ft_isalpha.c \
ft_isalnum.c \
ft_calloc.c \
ft_bzero.c \
ft_atoi.c

all: $(NAME)

$(NAME): comp
	ar -rcs $(NAME) $(SRC)

comp:
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
