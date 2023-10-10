/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_rrarb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:47:16 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/10/10 15:39:56 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_apply_rrarb(t_list **a, t_list **b, int c, char s)
{
	if (s == 'a')
	{
		while (ft_lpush_g_val(*a) != c)
			ft_rra(a, 1);
		while (ft_calc_place_b(*b, c) > 0)
			ft_rb(b, 1);
		ft_pb(a, b, 1);
	}
	else
	{
		while (ft_calc_place_a(*a, c) > 0)
			ft_rra(a, 1);
		while (ft_lpush_g_val(*b) != c)
			ft_rb(b, 1);
		ft_pa(a, b, 1);
	}
	return (-1);
}
