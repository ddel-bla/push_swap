/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:10:31 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/09/27 14:34:00 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_rrr(t_list **s_a, t_list **s_b, int print)
{
	ft_rra(s_a, 0);
	ft_rrb(s_b, 0);
	if (print)
		ft_putstr_fd("rrr\n", 1);
}
