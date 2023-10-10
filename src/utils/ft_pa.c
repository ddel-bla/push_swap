/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:11:13 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/09/27 14:34:00 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_pa(t_list **s_a, t_list **s_b, int print)
{
	t_list	*tmp;

	if (!*s_b)
		return ;
	tmp = *s_a;
	*s_a = *s_b;
	*s_b = (*s_b)->next;
	(*s_a)->next = tmp;
	if (print)
		ft_putstr_fd("pa\n", 1);
}
