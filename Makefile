# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/13 21:08:06 by rel-kass          #+#    #+#              #
#    Updated: 2024/11/20 02:32:38 by rel-kass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putnbr_fd.c ft_split.c ft_strchr.c ft_strrchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
	ft_strlcpy.c ft_putendl_fd.c ft_strlen.c ft_strncmp.c ft_strmapi.c ft_strnstr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \

BNSSRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \

OBJ = $(SRC:.c=.o)
BNSOBJ = $(BNSSRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BNSOBJ)
	ar rcs $(NAME) $(BNSOBJ)

clean:
	rm -f $(OBJ) $(BNSOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean