# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 18:26:57 by jcaron            #+#    #+#              #
#    Updated: 2022/12/08 15:23:26 by jcaron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_D	= 	./source/

SRC		=	$(SRC_D)low_hex_to_buf.c	\
			$(SRC_D)str_to_buf.c		\
			$(SRC_D)dec_to_buf.c		\
			$(SRC_D)ptr_to_buf.c		\
			$(SRC_D)up_hex_to_buf.c		\
			$(SRC_D)ft_buffer.c			\
			$(SRC_D)ft_printf.c			\
			$(SRC_D)udec_to_buf.c		\
			$(SRC_D)char_to_buf.c		\
			$(SRC_D)put_to_hex.c		\
			$(SRC_D)put_to_dec.c		\
			$(SRC_D)ft_strlen.c


INC_D	=	./include/

NAME	=	libftprintf.a

# compilation

CC		=	clang
CFLAG	=	-Wall -Wextra -Werror
CFLAG	= 	-Weverything -g 
OBJ 	=	$(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "***creation of library '$(NAME)'***"

%.o: %.c $(INC_D)*.h Makefile
		@$(CC) $(CFLAG) -I$(INC_D) -c $< -o $@
		@echo "***compilation of '$<' in '$@'***"

clean:
	@rm -f $(OBJ)
	@echo "***delation of all objects files***"

fclean: clean
	@rm -f $(NAME)
	@echo "***deletion of library '$(NAME)'***"

re: fclean all

.PHONY: all clean fclean re
