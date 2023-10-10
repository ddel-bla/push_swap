/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:10:57 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/09/27 14:33:53 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_rra(t_list **s_a, int print)
{
	t_list	*current;
	t_list	*prev;

	if (!*s_a || !(*s_a)->next)
		return ;
	current = *s_a;
	prev = NULL;
	while (current->next)
	{
		prev = current;
		current = current->next;
	}
	prev->next = NULL;
	current->next = *s_a;
	*s_a = current;
	if (print)
		ft_putstr_fd("rra\n", 1);
}
