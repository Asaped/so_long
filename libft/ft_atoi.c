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

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while (*nptr && (*nptr == 32 || (*nptr >= 9 && *nptr <= 13)))
		nptr++;
	if (*nptr == '-')
			sign = -1;
	if (*nptr == '+' || *nptr == '-')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9' && *nptr)
	{
		res *= 10;
		res += *nptr - 48;
		nptr++;
	}
	return (res * sign);
}
