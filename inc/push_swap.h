/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:32:36 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/07/07 14:32:36 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <libft.h>

# include <stdio.h>
# include <stdlib.h>

typedef struct s_push
{
	int	val;
}				t_push;

int		ft_lst_load_stack(int argc, char *argv[], t_list **s_a);

int		ft_lpush_is_sorted(t_list *s_a);
int		ft_lpush_is_dup(t_list *s_a);
int		ft_lpush_g_val(t_list *stack);
void	ft_lpush_p_val(t_list *stack, int val);

void	ft_exit_error(t_list **s_a, t_list **s_b, int fd);
void	ft_exit_freelist(t_list **list);

int		ft_find_min(t_list *a);
int		ft_find_max(t_list *a);
int		ft_find_nbr(t_list *a, int nbr);
int		ft_calc_place_b(t_list *s_b, int number);
int		ft_calc_place_a(t_list *a, int nbr);

void	ft_sort(t_list **s_a, t_list **s_b);
void	ft_sort_b_till_3(t_list **s_a, t_list **s_b);
void	ft_sort_big(t_list **s_a);
void	ft_sort_three(t_list **s_a);
void	ft_sort_b(t_list **s_a, t_list **s_b);
void	ft_sort_a(t_list **s_a, t_list **s_b);

int		ft_case_rarb_a(t_list *a, t_list *b, int c);
int		ft_case_rarb_b(t_list *a, t_list *b, int c);
int		ft_case_rrarrb_a(t_list *a, t_list *b, int c);
int		ft_case_rrarrb_b(t_list *a, t_list *b, int c);
int		ft_case_rarrb_a(t_list *a, t_list *b, int c);
int		ft_case_rarrb_b(t_list *a, t_list *b, int c);
int		ft_case_rrarb_a(t_list *a, t_list *b, int c);
int		ft_case_rrarb_b(t_list *a, t_list *b, int c);

int		ft_rotate_type_ab(t_list *a, t_list *b);
int		ft_rotate_type_ba(t_list *a, t_list *b);

int		ft_apply_rarb(t_list **a, t_list **b, int c, char s);
int		ft_apply_rrarrb(t_list **a, t_list **b, int c, char s);
int		ft_apply_rrarb(t_list **a, t_list **b, int c, char s);
int		ft_apply_rarrb(t_list **a, t_list **b, int c, char s);

void	ft_pa(t_list **s_a, t_list **s_b, int print);
void	ft_pb(t_list **s_a, t_list **s_b, int print);
void	ft_ra(t_list **s_a, int print);
void	ft_rb(t_list **s_b, int print);
void	ft_rr(t_list **s_a, t_list **s_b, int print);
void	ft_rra(t_list **s_a, int print);
void	ft_rrb(t_list **s_b, int print);
void	ft_rrr(t_list **s_a, t_list **s_b, int print);
void	ft_sa(t_list **s_a, int print);
void	ft_sb(t_list **s_b, int print);
void	ft_ss(t_list **s_a, t_list **s_b, int print);

void	ft_process_main(t_list **s_a, t_list **s_b, char *line);
void	ft_process_line(t_list **s_a, t_list **s_b, char *line);

void	ft_print(t_list *s_a, t_list *s_b);

#endif
