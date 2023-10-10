/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_rarb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:32:47 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/10/04 14:14:43 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_apply_rarb(t_list **a, t_list **b, int c, char s)
{
	if (s == 'a')
	{
		while (ft_lpush_g_val(*a) != c && ft_find_place_b(*b, c) > 0)
			ft_rr(a, b, 1);
		while (ft_lpush_g_val(*a) != c)
			ft_ra(a, 1);
		while (ft_find_place_b(*b, c) > 0)
			ft_rb(b, 1);
		ft_pb(a, b, 1);
	}
	else
	{
		while (ft_lpush_g_val(*b) != c && ft_find_place_a(*a, c) > 0)
			ft_rr(a, b, 1);
		while (ft_lpush_g_val(*b) != c)
			ft_rb(b, 1);
		while (ft_find_place_a(*a, c) > 0)
			ft_ra(a, 1);
		ft_pa(a, b, 1);
	}
	return (-1);
}
