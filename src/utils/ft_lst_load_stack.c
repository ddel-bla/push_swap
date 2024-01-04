/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_load_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:47:44 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/10/19 18:15:51 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_lst_load_stack(int argc, char *argv[], t_list **s_a)
{
	int		i;
	int		e;
	char	**tmp;
	t_push	*x;

	i = 1;
	while (i < argc)
	{
		tmp = ft_split(argv[i++], ' ');
		if (!tmp[0])
			ft_exit_error(s_a, NULL, 2);
		e = 0;
		while (tmp[e] != 0)
		{
			x = malloc(sizeof(t_push));
			if (!x)
				return (1);
			x->val = ft_atoi_ps(tmp[e]);
			ft_lstadd_back(s_a, ft_lstnew(x));
			free(tmp[e++]);
		}
		free(tmp);
	}
	return (0);
}
