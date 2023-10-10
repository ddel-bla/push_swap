/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_type_ba.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:49:15 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/10/03 16:31:55 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_rotate_type_ba(t_list *a, t_list *b)
{
	int		i;
	t_list	*tmp;

	tmp = b;
	i = ft_lstsize(a);
	while (tmp)
	{
		if (i > ft_case_rarb_a(a, b, ft_lpush_g_val(tmp)))
			i = ft_case_rarb_a(a, b, ft_lpush_g_val(tmp));
		if (i > ft_case_rrarrb_a(a, b, ft_lpush_g_val(tmp)))
			i = ft_case_rrarrb_a(a, b, ft_lpush_g_val(tmp));
		if (i > ft_case_rarrb_a(a, b, ft_lpush_g_val(tmp)))
			i = ft_case_rarrb_a(a, b, ft_lpush_g_val(tmp));
		if (i > ft_case_rrarb_a(a, b, ft_lpush_g_val(tmp)))
			i = ft_case_rrarb_a(a, b, ft_lpush_g_val(tmp));
		tmp = tmp->next;
	}
	return (i);
}
