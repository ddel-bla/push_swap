/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:11:07 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/09/27 14:33:53 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_ra(t_list **s_a, int print)
{
	t_list	*tmp;

	if (!*s_a || !(*s_a)->next)
		return ;
	tmp = *s_a;
	*s_a = ft_lstlast(*s_a);
	(*s_a)->next = tmp;
	*s_a = tmp->next;
	tmp->next = 0;
	if (print)
		ft_putstr_fd("ra\n", 1);
}
