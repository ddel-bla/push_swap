/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:55:38 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/09/29 19:36:55 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_sort_three(t_list **s_a)
{
	if (ft_find_min(*s_a) == ft_lpush_g_val(*s_a))
	{
		ft_rra(s_a, 1);
		ft_sa(s_a, 1);
	}
	else if (ft_find_max(*s_a) == ft_lpush_g_val(*s_a))
	{
		ft_ra(s_a, 1);
		if (!ft_lpush_is_sorted(*s_a))
			ft_sa(s_a, 1);
	}
	else
	{
		if (ft_lpush_g_val((*s_a)->next) == ft_find_max(*s_a))
			ft_rra(s_a, 1);
		else
			ft_sa(s_a, 1);
	}
}
