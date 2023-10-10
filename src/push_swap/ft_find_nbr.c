/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:26:12 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/09/29 19:40:35 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_find_nbr(t_list *a, int nbr)
{
	int		i;

	i = 0;
	while (ft_lpush_g_val(a) != nbr)
	{
		i++;
		a = a->next;
	}
	return (i);
}
