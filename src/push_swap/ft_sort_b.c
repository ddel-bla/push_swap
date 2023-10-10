/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:52:19 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/10/03 16:59:04 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>


void	ft_sort_b(t_list **s_a, t_list **s_b)
{
	int		i;
	t_list	*tmp;

	if (ft_lstsize(*s_a) > 3 && !ft_lpush_is_sorted(*s_a))
		ft_pb(s_a, s_b, 1);
	if (ft_lstsize(*s_a) > 3 && !ft_lpush_is_sorted(*s_a))
		ft_pb(s_a, s_b, 1);
	while (ft_lstsize(*s_a) > 3 && !ft_lpush_is_sorted(*s_a))
	{
		tmp = *s_a;
		i = ft_rotate_type_ab(*s_a, *s_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb_b(*s_a, *s_b, ft_lpush_g_val(tmp)))
				i = ft_apply_rarb(s_a, s_b, ft_lpush_g_val(tmp), 'a');
			else if (i == ft_case_rrarrb_b(*s_a, *s_b, ft_lpush_g_val(tmp)))
				i = ft_apply_rrarrb(s_a, s_b, ft_lpush_g_val(tmp), 'a');
			else if (i == ft_case_rarrb_b(*s_a, *s_b, ft_lpush_g_val(tmp)))
				i = ft_apply_rarrb(s_a, s_b, ft_lpush_g_val(tmp), 'a');
			else if (i == ft_case_rrarb_b(*s_a, *s_b, ft_lpush_g_val(tmp)))
				i = ft_apply_rrarb(s_a, s_b, ft_lpush_g_val(tmp), 'a');
			else
				tmp = tmp->next;
		}
	}
}
