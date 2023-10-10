/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:10:39 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/09/27 14:33:53 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_sa(t_list **s_a, int print)
{
	t_list	*sec;

	if (!*s_a || !(*s_a)->next)
		return ;
	sec = (*s_a)->next;
	(*s_a)->next = sec->next;
	sec->next = *s_a;
	*s_a = sec;
	if (print)
		ft_putstr_fd("sa\n", 1);
}
