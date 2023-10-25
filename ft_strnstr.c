/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:59:22 by adesille          #+#    #+#             */
/*   Updated: 2023/10/25 16:30:05 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <bsd/string.h>
// #include <stdio.h>

// 1. Manage NULL
// 2. While we're not at the end of bigstr[i+j] AND bigstr[i+j] != littlestr[j]
// 3. If littlestr[j+1] == '\0' = return &bigstr[i] 

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	int		littlelen;

	i = 0;
	j = 0;

	littlelen = ft_strlen(little);
	if (littlelen == 0)
		return ((char *)&big[i]);
	if ((char *)little == (void *)0)
		return ((char *)big);
	while (big[i] && len > 0)
	{
		j = 0;
		while (big[i + j] != '\0' && big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
			{
				if ((size_t)(littlelen) > len)
					return (0);
				return ((char *)&big[i]);
			}
			j++;
		}
		i++;
		len--;
	}
	return (0);
}
