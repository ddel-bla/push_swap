/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_place_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:26:48 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/10/02 16:30:35 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_find_place_b(t_list *s_b, int numb)
{
	int		i;
	t_list	*tmp;

	i = 1;
	if (numb > ft_lpush_g_val(s_b) && numb < ft_lpush_g_val(ft_lstlast(s_b)))
		i = 0;
	else if (numb > ft_find_max(s_b) || numb < ft_find_min(s_b))
		i = ft_find_index(s_b, ft_find_max(s_b));
	else
	{
		tmp = s_b->next;
		while (ft_lpush_g_val(s_b) < numb || ft_lpush_g_val(tmp) > numb)
		{
			s_b = s_b->next;
			tmp = s_b->next;
			i++;
		}
	}
	return (i);
}
