/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_rrarb_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:38:29 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/10/10 15:40:44 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_case_rrarb_b(t_list *a, t_list *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_nbr(a, c))
		i = ft_lstsize(a) - ft_find_nbr(a, c);
	i = ft_calc_place_b(b, c) + i;
	return (i);
}
