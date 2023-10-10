/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lpush_is_dup.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:40:19 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/09/27 19:35:58 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_lpush_is_dup(t_list *s_a)
{
	t_push	*ref;
	t_push	*dat;
	t_list	*pos;

	while (s_a)
	{
		ref = s_a->content;
		pos = s_a->next;
		while (pos)
		{
			dat = pos->content;
			if (ref->val == dat->val)
				return (1);
			pos = pos->next;
		}
		s_a = s_a->next;
	}
	return (0);
}
