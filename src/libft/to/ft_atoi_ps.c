/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_ps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:05:43 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/09/27 14:26:15 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_err_print(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int
	ft_atoi_ps(const char *str)
{
	unsigned long	i;
	long int		res;
	int				mult;

	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	mult = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			mult = -1;
		i++;
	}
	if (!str[i])
		ft_err_print();
	res = 0;
	while (str[i] && ft_isdigit(str[i]))
		res = res * 10 + (str[i++] - '0');
	if (!ft_isdigit(str[i]) && str[i] != 0)
		ft_err_print();
	else if ((res * mult > 2147483647) || (res * mult < -2147483648))
		ft_err_print();
	return (res * mult);
}
