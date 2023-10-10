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
GREEN   	:=	\033[1;32m
YELLOW  	:= 	\033[0;33m
RESET   	:= 	\033[0m

S_UTILS		= 	src/utils/ft_exit_error.c \
				src/utils/ft_exit_freelist.c \
				src/utils/ft_lpush_g_val.c \
				src/utils/ft_lpush_is_dup.c \
				src/utils/ft_lpush_is_sorted.c \
				src/utils/ft_lpush_p_val.c \
				src/utils/ft_lst_load_stack.c \
				src/utils/ft_pa.c \
				src/utils/ft_pb.c \
				src/utils/ft_ra.c \
				src/utils/ft_rb.c \
				src/utils/ft_rr.c \
				src/utils/ft_rra.c \
				src/utils/ft_rrb.c \
				src/utils/ft_rrr.c \
				src/utils/ft_sa.c \
				src/utils/ft_sb.c \
				src/utils/ft_ss.c
O_UTILS		= 	$(S_UTILS:.c=.o)

S_PUSH		= 	src/push_swap/ft_apply_rarb.c \
				src/push_swap/ft_apply_rarrb.c \
				src/push_swap/ft_apply_rrarb.c \
				src/push_swap/ft_apply_rrarrb.c \
				src/push_swap/ft_calc_place_a.c \
				src/push_swap/ft_calc_place_b.c \
				src/push_swap/ft_case_rarb_a.c \
				src/push_swap/ft_case_rarb_b.c \
				src/push_swap/ft_case_rarrb_a.c \
				src/push_swap/ft_case_rarrb_b.c \
				src/push_swap/ft_case_rrarb_a.c \
				src/push_swap/ft_case_rrarb_b.c \
				src/push_swap/ft_case_rrarrb_a.c \
				src/push_swap/ft_case_rrarrb_b.c \
				src/push_swap/ft_find_max.c \
				src/push_swap/ft_find_min.c \
				src/push_swap/ft_find_nbr.c \
				src/push_swap/ft_rotate_type_ab.c \
				src/push_swap/ft_rotate_type_ba.c \
				src/push_swap/ft_sort_a.c \
				src/push_swap/ft_sort_b.c \
				src/push_swap/ft_sort_three.c \
				src/push_swap/ft_sort.c \
				src/push_swap/push_swap.c 
O_PUSH		= 	$(S_PUSH:.c=.o)

S_BONUS		= 	src/checker/checker.c \
				src/checker/ft_process_line.c \
				src/checker/ft_process_main.c 
O_BONUS		=	$(S_BONUS:.c=.o)

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

.PHONY: all clean fclean re bonus