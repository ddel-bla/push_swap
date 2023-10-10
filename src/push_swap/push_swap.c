/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:13:40 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/10/02 16:06:16 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	main(int argc, char *argv[])
{
	t_list	*s_a;
	t_list	*s_b;

	s_a = 0;
	s_b = 0;
	if (ft_lst_load_stack(argc, argv, &s_a))
		ft_exit_error(&s_a, &s_b, 2);
	if (s_a == 0)
		exit(0);
	if (ft_lpush_is_dup(s_a))
		ft_exit_error(&s_a, &s_b, 2);
	if (!ft_lpush_is_sorted(s_a))
		ft_sort(&s_a, &s_b);
	ft_exit_freelist(&s_a);
	ft_exit_freelist(&s_b);
	return (0);
}
