# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 18:26:57 by jcaron            #+#    #+#              #
#    Updated: 2022/12/01 13:30:42 by jcaron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	ft_printf.c \


OBJ_D	=	obj

INC_D	=	include

NAME	=	libftprintf.a

# compilation

CC		=	clang
CFLAG	=	-Wall -Wextra -Werror
DFLAG	= 	-Weverything -g -fsanitize=address,undefined
OBJ 	=	$(SRC:%.c=%.o)
OBJ_B	=	$(SRC_B:%.c=%.o)


ifdef(debug)
	CFLAG = DFLAG
endif

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ_D)$(OBJ)
	@ranlib $(NAME)
	@echo "***creation of library '$(NAME)'***"

%.o: %.c  $(INC) Makefile
		@mkdir -p $(OBJ_D)
		@$(CC) $(CFLAG) -c $< -o $@
		@echo "***compilation of '$<' in '$@'***"

bonus : $(OBJ_B) all
	@ar rc $(NAME) $(OBJ) $(OBJ_B)
	@ranlib $(NAME)
	@echo "***creation of library '$(NAME)' with bonus functions***"

clean:
	@rm -f $(OBJ_D)$(OBJ)
	@echo "***delation of all objects files***"

fclean: clean
	@rm -f $(NAME)
	@echo "***deletion of library '$(NAME)'***"

re: fclean all

debug :


.PHONY: all clean fclean re debug
