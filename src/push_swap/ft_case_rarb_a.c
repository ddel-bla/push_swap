/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_rarb_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:38:41 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/10/10 15:40:44 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_case_rarb_a(t_list *a, t_list *b, int c)
{
	int	i;

	i = ft_calc_place_a(a, c);
	if (i < ft_find_nbr(b, c))
		i = ft_find_nbr(b, c);
	return (i);
}
