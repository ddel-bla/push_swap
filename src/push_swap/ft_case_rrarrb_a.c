/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_rrarrb_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:38:47 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/10/10 15:40:44 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_case_rrarrb_a(t_list *a, t_list *b, int c)
{
	int	i;

	i = 0;
	if (ft_calc_place_a(a, c))
		i = ft_lstsize(a) - ft_calc_place_a(a, c);
	if ((i < (ft_lstsize(b) - ft_find_nbr(b, c))) && ft_find_nbr(b, c))
		i = ft_lstsize(b) - ft_find_nbr(b, c);
	return (i);
}
