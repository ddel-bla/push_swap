/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:28:33 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/09/29 12:10:36 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_find_min(t_list *a)
{
	int		i;

	i = ft_lpush_g_val(a);
	while (a)
	{
		if (ft_lpush_g_val(a) < i)
			i = ft_lpush_g_val(a);
		a = a->next;
	}
	return (i);
}
