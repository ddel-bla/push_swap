/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_type_ab.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:50:15 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/10/03 16:59:48 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_rotate_type_ab(t_list *a, t_list *b)
{
	int		i;
	t_list	*tmp;

	tmp = a;
	i = ft_lstsize(b);
	while (tmp)
	{
		if (i > ft_case_rarb_b(a, b, ft_lpush_g_val(tmp)))
			i = ft_case_rarb_b(a, b, ft_lpush_g_val(tmp));
		if (i > ft_case_rrarrb_b(a, b, ft_lpush_g_val(tmp)))
			i = ft_case_rrarrb_b(a, b, ft_lpush_g_val(tmp));
		if (i > ft_case_rarrb_b(a, b, ft_lpush_g_val(tmp)))
			i = ft_case_rarrb_b(a, b, ft_lpush_g_val(tmp));
		if (i > ft_case_rrarb_b(a, b, ft_lpush_g_val(tmp)))
			i = ft_case_rrarb_b(a, b, ft_lpush_g_val(tmp));
		tmp = tmp->next;
	}
	return (i);
}
