# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/29 14:43:06 by ddel-bla          #+#    #+#              #
#    Updated: 2023/08/29 14:43:06 by ddel-bla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COLOR DEFINITION #
GREEN   	:= \033[1;32m
YELLOW  	:= \033[0;33m
RESET   	:= \033[0m

S_UTILS		= $(wildcard src/utils/*.c)
O_UTILS		= $(S_UTILS:.c=.o)
#D_UTILS		= $(O_UTILS:.o=.d)

S_PUSH		= $(wildcard src/push_swap/*.c)
O_PUSH		= $(S_PUSH:.c=.o)
#D_PUSH 		= $(O_PUSH:.c=.d)

S_BONUS		= $(wildcard src/checker/*.c)
O_BONUS		= $(S_BONUS:.c=.o)
#D_BONUS		= $(O_BONUS:.c=.d)

NAME		= push_swap
BONUS 		= checker

CC			= gcc
INCLUDE 	= -L ./src/libft -lft 
#DEBUG		= -g3 -fsanitize=address

CFLAGS		= -Wall -Wextra -Werror -I ./src/libft/inc/ -I ./inc/ $(DEBUG)
#DEPFLAGS	= -MMD

RM 			= rm -rf
LIBFTDIR 	= src/libft/

.c.o:
	@$(CC) $(CFLAGS) $(DEPFLAGS) -c $< -o $(<:.c=.o)
	@echo "$(YELLOW)Compiling: $< $(RESET)"

$(NAME): $(O_UTILS) $(O_PUSH)
	make -C $(LIBFTDIR)
	@$(CC) $(CFLAGS) $(O_UTILS) $(O_PUSH) -o $(NAME) $(INCLUDE) 
	@echo "$(GREEN)push_swap - Compiled!$(RESET)"

$(BONUS): $(O_UTILS) $(O_BONUS)
	make -C $(LIBFTDIR)
	@$(CC) $(CFLAGS) $(O_UTILS) $(O_BONUS) -o $(BONUS) $(INCLUDE)
	@echo "$(GREEN)push_swap bonus - Compiled!$(RESET)"

all: $(NAME) $(BONUS)

bonus: $(BONUS)

clean: 
	@$(RM) $(D_UTILS) $(D_PUSH) $(D_BONUS) $(O_UTILS) $(O_PUSH) $(O_BONUS) 
	@echo "$(GREEN)push_swap - Object files cleaned!$(RESET)"
	@cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
	@$(RM) $(NAME) $(BONUS)
	@echo "$(GREEN)push_swap - Executable files cleaned!$(RESET)"
	@cd $(LIBFTDIR) && $(MAKE) fclean 

re: fclean all
	@echo "$(GREEN)push_swap - Re compiled!$(RESET)"

#-include $(D_NAME)

.PHONY: all clean fclean re bonus