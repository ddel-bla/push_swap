/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_line.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:31:24 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/09/27 14:34:00 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_process_line(t_list **s_a, t_list **s_b, char *line)
{
	if (!ft_strcmp(line, "pa\n"))
		ft_pa(s_a, s_b, 0);
	else if (!ft_strcmp(line, "pb\n"))
		ft_pb(s_a, s_b, 0);
	else if (!ft_strcmp(line, "ra\n"))
		ft_ra(s_a, 0);
	else if (!ft_strcmp(line, "rb\n"))
		ft_rb(s_b, 0);
	else if (!ft_strcmp(line, "rr\n"))
		ft_rr(s_a, s_b, 0);
	else if (!ft_strcmp(line, "rra\n"))
		ft_rra(s_a, 0);
	else if (!ft_strcmp(line, "rrb\n"))
		ft_rrb(s_b, 0);
	else if (!ft_strcmp(line, "rrr\n"))
		ft_rrr(s_a, s_b, 0);
	else if (!ft_strcmp(line, "sa\n"))
		ft_sa(s_a, 0);
	else if (!ft_strcmp(line, "sb\n"))
		ft_sb(s_b, 0);
	else if (!ft_strcmp(line, "ss\n"))
		ft_ss(s_a, s_b, 0);
	else
		ft_exit_error(s_a, s_b, 2);
}
