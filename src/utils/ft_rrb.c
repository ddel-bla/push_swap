/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:10:54 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/09/27 14:34:00 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_rrb(t_list **s_b, int print)
{
	t_list	*current;
	t_list	*prev;

	if (!*s_b || !(*s_b)->next)
		return ;
	current = *s_b;
	prev = NULL;
	while (current->next)
	{
		prev = current;
		current = current->next;
	}
	prev->next = NULL;
	current->next = *s_b;
	*s_b = current;
	if (print)
		ft_putstr_fd("rrb\n", 1);
}
