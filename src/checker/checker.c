/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:32:08 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/10/10 19:43:09 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	main(int argc, char **argv)
{
	t_list	*s_a;
	t_list	*s_b;
	char	*line;

	s_a = 0;
	if (ft_lst_load_stack(argc, argv, &s_a))
		ft_exit_error(&s_a, &s_b, 2);
	if (!s_a)
		exit (1);
	else if (ft_lpush_is_dup(s_a))
		ft_exit_error(&s_a, &s_b, 2);
	line = get_next_line(0);
	if (!line && !ft_lpush_is_sorted(s_a))
		ft_putstr_fd("KO\n", 1);
	else if (!line && ft_lpush_is_sorted(s_a))
		ft_putstr_fd("OK\n", 1);
	else
		ft_process_main(&s_a, &s_b, line);
	ft_exit_freelist(&s_a);
	ft_exit_freelist(&s_b);
	return (0);
}
