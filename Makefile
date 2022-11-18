# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vballe <vballe@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 15:29:47 by vballe            #+#    #+#              #
#    Updated: 2022/11/14 17:34:48 by vballe           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
AR	= ar -rcs
RM		= rm -f


FILES	=	ft_atoi\
			ft_bzero\
			ft_calloc\
			ft_isalnum\
			ft_isalpha\
			ft_isascii\
			ft_isdigit\
			ft_isprint\
			ft_itoa\
			ft_memchr\
			ft_memcmp\
			ft_memcpy\
			ft_memmove\
			ft_memset\
			ft_putchar_fd\
		    ft_putendl_fd\
			ft_putnbr_fd\
			ft_putstr_fd\
			ft_split\
			ft_strchr\
			ft_strdup\
			ft_striteri\
			ft_strjoin\
			ft_strlcat\
			ft_strlcpy\
			ft_strlen\
			ft_strmapi\
			ft_strncmp\
			ft_strnstr\
			ft_strrchr\
			ft_substr\
			ft_tolower\
			ft_toupper\

FILES_B = 	ft_lstnew\
			ft_lstadd_front\
			ft_lstsize\
			ft_lstlast\

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_B)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))

.c.o:	$(SRCS)
	$(CC)	$(CFLAGS) -c -o $@ $<
	
$(NAME):	$(OBJS)
	$(AR) $@ $^

bonus:	$(OBJS_B)
	$(AR)	$(NAME) $^

all:	$(NAME)

clean:
	$(RM)	$(OBJS)	$(OBJS_B)

fclean:	clean
	$(RM)	$(NAME)

re:	clean all

.PHONY:	bonus all clean fclean re