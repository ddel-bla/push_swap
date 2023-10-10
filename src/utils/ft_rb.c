/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:11:04 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/09/27 14:34:00 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_rb(t_list **s_b, int print)
{
	t_list	*tmp;

	if (!*s_b || !(*s_b)->next)
		return ;
	tmp = *s_b;
	*s_b = ft_lstlast(*s_b);
	(*s_b)->next = tmp;
	*s_b = tmp->next;
	tmp->next = 0;
	if (print)
		ft_putstr_fd("rb\n", 1);
}
