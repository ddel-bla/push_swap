/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:57:02 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/09/18 17:04:46 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char
	*ft_strchr(const char *s, int c)
{
	if (!(*s))
	{
		if (!(char) c)
			return ((char *)s);
		return (0);
	}
	else
	{
		if (*s == (char) c)
			return ((char *) s);
		else
			return (ft_strchr(s + 1, c));
	}
}
