# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/08 14:13:05 by zmrabet           #+#    #+#              #
#    Updated: 2023/02/08 14:57:11 by zmrabet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
W = $(shell tput -Txterm setaf 7)
R = $(shell tput -Txterm setaf 1)
Y = $(shell tput -Txterm setaf 3)

SOURCES = \
    mandatory/ft_isalpha.c mandatory/ft_isdigit.c mandatory/ft_isalnum.c mandatory/ft_isascii.c mandatory/ft_isprint.c \
	mandatory/ft_strlen.c mandatory/ft_memset.c  mandatory/ft_bzero.c mandatory/ft_memcpy.c mandatory/ft_memmove.c \
	mandatory/ft_strlcpy.c mandatory/ft_strlcat.c  mandatory/ft_toupper.c mandatory/ft_tolower.c mandatory/ft_strchr.c \
	mandatory/ft_strrchr.c mandatory/ft_strncmp.c mandatory/ft_memchr.c  mandatory/ft_memcmp.c mandatory/ft_strnstr.c \
	mandatory/ft_atoi.c mandatory/ft_calloc.c  mandatory/ft_strdup.c  mandatory/ft_substr.c mandatory/ft_strjoin.c \
	mandatory/ft_strtrim.c  mandatory/ft_split.c mandatory/ft_itoa.c  mandatory/ft_strmapi.c  mandatory/ft_striteri.c \
	mandatory/ft_putchar_fd.c mandatory/ft_putstr_fd.c mandatory/ft_putendl_fd.c  mandatory/ft_putnbr_fd.c

BSOURCES = bonus/ft_lstnew.c bonus/ft_lstadd_front.c bonus/ft_lstsize.c bonus/ft_lstlast.c bonus/ft_lstadd_back.c \
		bonus/ft_lstdelone.c bonus/ft_lstclear.c bonus/ft_lstiter.c bonus/ft_lstmap.c
    
OBJECTS = $(SOURCES:.c=.o)
BOBJECTS = $(BSOURCES:.c=.o)
AR = ar rc
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(AR) $@ $(OBJECTS)
	@echo "$(Y)-----[ Generate ... $@ ]-----$(W)"
	@echo ""
	@echo "       ░$(Y)█$(W)░░░$(Y)▀$(W)░░$(Y)█▀▀▄$(W)░$(Y)█▀▀$(W)░$(Y)▀█▀$(W)"
	@echo "       ░$(Y)█$(W)░░░$(Y)█▀$(W)░$(Y)█▀▀▄$(W)░$(Y)█▀$(W)░░░$(Y)█$(W)░"
	@echo "       ░$(Y)▀▀$(W)░$(Y)▀▀▀$(W)░$(Y)▀▀▀▀$(W)░$(Y)▀$(W)░░░░$(Y)▀$(W)░"
	@echo "$(Y)----------------------------------$(W)"


bonus:  $(BOBJECTS)
	@$(AR) $(NAME) $(BOBJECTS)
	@echo "$(Y)-----[ Generate ... $@ ]-----$(W)"
	@echo ""
	@echo "       ░$(Y)█$(W)░░░$(Y)▀$(W)░░$(Y)█▀▀▄$(W)░$(Y)█▀▀$(W)░$(Y)▀█▀$(W)"
	@echo "       ░$(Y)█$(W)░░░$(Y)█▀$(W)░$(Y)█▀▀▄$(W)░$(Y)█▀$(W)░░░$(Y)█$(W)░"
	@echo "       ░$(Y)▀▀$(W)░$(Y)▀▀▀$(W)░$(Y)▀▀▀▀$(W)░$(Y)▀$(W)░░░░$(Y)▀$(W)░"
	@echo "$(Y)----------------------------------$(W)"

%.o: %.c libft.h
	@$(CC) $(CFLAGS) -c $< -o $@ 
	@echo "$(Y)Compiling ..." $< $(W)"to "$@

clean:
	@rm -f $(OBJECTS) $(BOBJECTS)
	@echo ""
	@echo "[$(R)Delete Object Files : $(W)$(OBJECTS) $(BOBJECTS)]"

fclean: clean
	@rm -f $(NAME)
	@echo ""
	@echo "[$(R)Delete Executable File : $(W)$(NAME)]"

re: fclean all
