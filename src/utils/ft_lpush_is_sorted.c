/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lpush_is_sorted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:36:29 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/09/27 19:35:58 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_lpush_is_sorted(t_list *s_a)
{
	t_push	*pre;
	t_push	*act;

	act = s_a->content;
	while (s_a && s_a->next)
	{
		pre = act;
		s_a = s_a->next;
		act = s_a->content;
		if (pre->val > act->val)
			return (0);
	}
	return (1);
}
