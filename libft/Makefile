# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmuravch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/03 02:42:25 by hmuravch          #+#    #+#              #
#    Updated: 2018/06/20 14:46:54 by hmuravch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a

NOC=\x1b[0m
OKC=\x1b[32m
ERC=\x1b[31m
WAC=\x1b[33m

SRC =	./ft_atoi.c	./ft_isdigit.c	./ft_strcat.c	./ft_strdup.c	./ft_strncpy.c \
			./ft_isalnum.c	./ft_isprint.c	./ft_strchr.c	./ft_strlen.c	./ft_strnstr.c \
			./ft_isalpha.c	./ft_strcmp.c	./ft_strncat.c	./ft_strrchr.c \
			./ft_isascii.c	./ft_strcpy.c	./ft_strncmp.c	./ft_strstr.c \
			./ft_toupper.c	./ft_tolower.c	./ft_itoa.c	./ft_putendl.c	./ft_putstr.c \
			./ft_strequ.c	./ft_strmap.c	./ft_strsplit.c	./ft_putendl_fd.c \
			./ft_putstr_fd.c	./ft_striter.c	./ft_strmapi.c	./ft_strsub.c \
			./ft_putchar.c	./ft_putnbr.c	./ft_strclr.c	./ft_striteri.c	./ft_strnequ.c	\
			./ft_strtrim.c	./ft_putchar_fd.c	./ft_putnbr_fd.c	./ft_strdel.c	./ft_strjoin.c \
			./ft_strnew.c	./ft_memset.c	./ft_memcpy.c	./ft_memccpy.c	./ft_memmove.c \
			./ft_memchr.c	./ft_memalloc.c	./ft_memdel.c	./ft_bzero.c	./ft_memcmp.c \
			./ft_strlcat.c	./ft_lstnew.c	./ft_lstdelone.c ./ft_lstadd.c ./ft_lstiter.c	\
			./ft_lstmap.c	./ft_lstdel.c	./ft_fill_word.c	./ft_num_of_words.c	./ft_range.c \
			./ft_swap.c	./ft_sqrt.c	./ft_realloc.c

OBJ =	ft_atoi.o	ft_isdigit.o	ft_strcat.o	ft_strdup.o	ft_strncpy.o \
			ft_isalnum.o	ft_isprint.o	ft_strchr.o	ft_strlen.o	ft_strnstr.o \
			ft_isalpha.o	ft_strcmp.o	ft_strncat.o	ft_strrchr.o \
			ft_isascii.o	ft_strcpy.o	ft_strncmp.o	ft_strstr.o \
			ft_toupper.o	ft_tolower.o	ft_itoa.o	ft_putendl.o	ft_putstr.o \
			ft_strequ.o	ft_strmap.o	ft_strsplit.o	ft_putendl_fd.o \
			ft_putstr_fd.o	ft_striter.o	ft_strmapi.o	ft_strsub.o	ft_putchar.o \
			ft_putnbr.o	ft_strclr.o	ft_striteri.o	ft_strnequ.o	ft_strtrim.o \
			ft_putchar_fd.o	ft_putnbr_fd.o	ft_strdel.o	ft_strjoin.o	ft_strnew.o \
			ft_memset.o	ft_memcpy.o	ft_memccpy.o	ft_memmove.o	ft_memchr.o \
			ft_memalloc.o	ft_memdel.o	ft_bzero.o	ft_memcmp.o ft_strlcat.o	ft_lstnew.o \
			ft_lstdelone.o ft_lstadd.o	ft_lstiter.o	ft_lstmap.o	ft_lstdel.o	ft_fill_word.o \
			ft_num_of_words.o	ft_range.o	ft_swap.o	ft_sqrt.o	ft_realloc.o

all: $(NAME)

$(NAME):
	@gcc -c $(SRC) -Wall -Wextra -Werror
	@ar rc    $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "$(OKC)LIBFT: Libft is ready$(NOC)"

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)
	@echo "$(ERC)LIBFT: Libft was deleted$(NOC)"

re:	fclean all
