# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 17:31:17 by sungohki          #+#    #+#              #
#    Updated: 2023/03/03 17:49:59 by sungohki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft_ps.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
INCLUDES =	src/push_swap.h\
			src/libft/libft.h
AR = ar crus

LIBFT = src/libft
SRC_DIR = src/
OBJ_DIR = obj/
SRC_FILES =	push_swap\
			push\
			rotate\
			reverse_rotate\
			swap
SRC =	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ = 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

all : $(NAME)

$(NAME) : $(OBJ)
	@$(MAKE) bonus -C $(LIBFT)
	@cp $(LIBFT)/libft.a .
	@mv libft.a $(NAME)
	$(AR) $(NAME) $(OBJ)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean :
	$(RM) -rf $(OBJ_DIR)
	@make clean -C $(LIBFT)

fclean : clean
	$(RM) -f $(NAME)
	$(RM) -f $(LIBFT)/libft.a

re : fclean all

.PHONY : all clean fclean re