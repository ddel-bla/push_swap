/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:11:10 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/09/27 14:34:00 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_pb(t_list **s_a, t_list **s_b, int print)
{
	t_list	*tmp;

	if (!*s_a)
		return ;
	tmp = *s_b;
	*s_b = *s_a;
	*s_a = (*s_a)->next;
	(*s_b)->next = tmp;
	if (print)
		ft_putstr_fd("pb\n", 1);
}
