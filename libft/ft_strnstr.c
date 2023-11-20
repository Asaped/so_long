/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moturki <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:17:59 by moturki           #+#    #+#             */
/*   Updated: 2023/08/28 19:18:02 by moturki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!little[0] || !len)
		return ((char *)big);
	i = 0;
	j = 0;
	while (big[i] && little[0] && i < len)
	{
		while (big[i] == little[j] && i < len)
		{
			i++;
			j++;
			if (!little[j])
				return ((char *)big + i - j);
			if (little[j] && little[j] != big[i])
				i--;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
