# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rallouan <rallouan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/15 13:34:11 by rallouan          #+#    #+#              #
#    Updated: 2023/08/23 14:27:51 by rallouan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= /bin/rm -f

BUILD_DIR = build
SRCS      = ft_print_char.c\
            ft_print_hex.c\
            ft_print_nbr.c\
            ft_print_pointer.c\
            ft_print_str.c\
            ft_print_unbr.c\
            ft_print_upperhex.c\
            ft_printf.c

OBJS = $(SRCS:%.c=$(BUILD_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)

$(OBJS): $(BUILD_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r $(BUILD_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all
	
.PHONY: all clean fclean re
