/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:10:44 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/09/27 14:34:00 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_sb(t_list **s_b, int print)
{
	t_list	*sec;

	if (!*s_b || !(*s_b)->next)
		return ;
	sec = (*s_b)->next;
	(*s_b)->next = sec->next;
	sec->next = *s_b;
	*s_b = sec;
	if (print)
		ft_putstr_fd("sb\n", 1);
}
