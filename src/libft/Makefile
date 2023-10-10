# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 17:23:53 by ddel-bla          #+#    #+#              #
#    Updated: 2023/09/18 16:51:56 by ddel-bla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COLOR DEFINITION #
GREEN = \033[0;92m
YELLOW = \033[0;93m
RESET   := \033[0m

SRC				=	$(wildcard is/*.c mem/*.c put/*.c str/*.c to/*.c lst/*.c gnl/*.c)
OBJ				=	$(SRC:.c=.o)
DEP				=	$(OBJ:.o=.d)
NAME			=	libft.a

LIB				=	ar rcs
CC				= 	gcc

CFLAGS			=	-I ./inc -Wall -Wextra -Werror
DEPFLAGS		=	-MMD

RM				=	rm -f

.c.o:
		@$(CC) $(CFLAGS) $(DEPFLAGS) -c $< -o $(<:.c=.o)
		@echo "$(YELLOW)Compiling: $< $(RESET)"
		
$(NAME):		$(OBJ)
				@$(LIB) $(NAME) $(OBJ)
				@echo "$(GREEN)libft - Compiled!$(RESET)"

all:			$(NAME)

clean:			
				@$(RM) $(OBJ) $(DEP) 
				@echo "$(GREEN)libft - Object files cleaned!$(RESET)"

fclean:			clean
				@$(RM) $(NAME)
				@echo "$(GREEN)libft - Executable files cleaned!$(RESET)"

re:				fclean all
				@echo "$(GREEN)libft - Re compiled!$(RESET)"

-include $(DEP)

.PHONY: all clean fclean re
