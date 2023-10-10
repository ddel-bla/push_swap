/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:54:22 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/09/29 19:38:28 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_sort(t_list **s_a, t_list **s_b)
{
	int		i;

	if (ft_lstsize(*s_a) == 2)
		ft_sa(s_a, 1);
	else
	{
		ft_sort_b(s_a, s_b);
		ft_sort_a(s_a, s_b);
		i = ft_find_index(*s_a, ft_find_min(*s_a));
		if (i < ft_lstsize(*s_a) - i)
			while (ft_lpush_g_val(*s_a) != ft_find_min(*s_a))
				ft_ra(s_a, 1);
		else
			while (ft_lpush_g_val(*s_a) != ft_find_min(*s_a))
				ft_rra(s_a, 1);
	}
}
