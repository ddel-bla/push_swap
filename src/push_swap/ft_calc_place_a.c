/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_place_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:27:29 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/10/10 15:40:44 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_calc_place_a(t_list *s_a, int numb)
{
	int		i;
	t_list	*tmp;

	i = 1;
	if (numb < ft_lpush_g_val(s_a) && numb > ft_lpush_g_val(ft_lstlast(s_a)))
		i = 0;
	else if (numb > ft_find_max(s_a) || numb < ft_find_min(s_a))
		i = ft_find_nbr(s_a, ft_find_min(s_a));
	else
	{
		tmp = s_a->next;
		while (ft_lpush_g_val(s_a) > numb || ft_lpush_g_val(tmp) < numb)
		{
			s_a = s_a->next;
			tmp = s_a->next;
			i++;
		}
	}
	return (i);
}
