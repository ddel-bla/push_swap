/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:18:57 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/09/27 17:48:35 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_process_main(t_list **s_a, t_list **s_b, char *line)
{
	while (line && *line != '\n')
	{
		ft_process_line(s_a, s_b, line);
		free(line);
		line = get_next_line(0);
	}
	if (*s_b || !ft_lpush_is_sorted(*s_a))
		ft_putstr_fd("KO\n", 1);
	else
		ft_putstr_fd("OK\n", 1);
}
