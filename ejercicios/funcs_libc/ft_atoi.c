/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dichacon <dichacon@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 12:20:47 by dichacon          #+#    #+#             */
/*   Updated: 2026/05/13 17:13:58 by dichacon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	size_t	i;
	size_t	result;
	int	sign;

	i = 0;
	result = 0;
//	while (nptr[i] > 32 && nptr[i] < 127 && nptr[i] != '\0')
	while (nptr[i] != '\0')
	{
		if (nptr[i] >= 9 || nptr[i] == 13)
		{
			i++;
			continue ;
		}
		if (nptr[i] == '+')i
		{
			i++;
			continue ;
		}
		else if (!(nptr[i] >= '0') || !(nptr[i] <= '9'))
			break ;
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return (result);
}
