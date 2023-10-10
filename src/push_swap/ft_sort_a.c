/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:53:46 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/10/03 16:44:27 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_sort_a(t_list **s_a, t_list **s_b)
{
	int		i;
	t_list	*tmp;

	if (!ft_lpush_is_sorted(*s_a))
		ft_sort_three(s_a);
	while (*s_b)
	{
		tmp = *s_b;
		i = ft_rotate_type_ba(*s_a, *s_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb_a(*s_a, *s_b, ft_lpush_g_val(tmp)))
				i = ft_apply_rarb(s_a, s_b, ft_lpush_g_val(tmp), 'b');
			else if (i == ft_case_rarrb_a(*s_a, *s_b, ft_lpush_g_val(tmp)))
				i = ft_apply_rarrb(s_a, s_b, ft_lpush_g_val(tmp), 'b');
			else if (i == ft_case_rrarrb_a(*s_a, *s_b, ft_lpush_g_val(tmp)))
				i = ft_apply_rrarrb(s_a, s_b, ft_lpush_g_val(tmp), 'b');
			else if (i == ft_case_rrarb_a(*s_a, *s_b, ft_lpush_g_val(tmp)))
				i = ft_apply_rrarb(s_a, s_b, ft_lpush_g_val(tmp), 'b');
			else
				tmp = tmp->next;
		}
	}
}
