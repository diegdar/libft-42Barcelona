/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dichacon <dichacon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 17:04:23 by dichacon          #+#    #+#             */
/*   Updated: 2026/05/12 18:27:26 by dichacon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;	
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	little_len = ft_strlen(little);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i] == little[j])
		{
			if (j == little_len - 1)
				return ((char *)(&big[i - j]));
			i++;
			j++;
		}
		i++;
	}
	return (NULL);
}
