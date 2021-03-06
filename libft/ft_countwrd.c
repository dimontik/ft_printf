/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwrd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddovzhik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 22:03:56 by ddovzhik          #+#    #+#             */
/*   Updated: 2016/12/08 22:03:57 by ddovzhik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countwrd(char const *s, char c)
{
	size_t i;
	size_t n;

	i = 0;
	n = 0;
	if ((s[0] != c) && (s[1] == '\0'))
		return (1);
	while (s[i])
	{
		if (s[i + 1])
			if (((s[i] == c) && (s[i + 1] != c)) || ((i == 0) && (s[i] != c)))
				n++;
		i++;
	}
	return (n);
}
