#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akravets <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/06 19:00:08 by akravets          #+#    #+#              #
#    Updated: 2016/12/08 15:22:02 by akravets         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
SRC =	ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c\
		ft_memcmp.c ft_strlen.c ft_strcpy.c ft_strncpy.c ft_isalnum.c\
		ft_strdup.c ft_strnstr.c ft_isalpha.c\
		ft_strlcat.c ft_strrchr.c ft_isascii.c\
		ft_strstr.c ft_isdigit.c ft_strcat.c ft_tolower.c ft_toupper.c ft_atoi.c\
		ft_isprint.c ft_strchr.c ft_strncat.c\
		ft_strcmp.c ft_strncmp.c ft_memalloc.c ft_memdel.c ft_strnew.c\
		ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c\
		ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c\
		ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c\
		ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
		ft_putnbr_fd.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c\
		ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_num.c ft_m.c ft_size.c\
		ft_str.c ft_str1.c\

OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
