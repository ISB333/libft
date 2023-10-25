/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:59:22 by adesille          #+#    #+#             */
/*   Updated: 2023/10/25 12:49:39 by adesille         ###   ########.fr       */
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
	int		biglen;
	int		littlelen;

	i = 0;
	j = 0;
	// if (big == NULL || little == NULL)
	// 	return (NULL);
	biglen = ft_strlen(big);
	littlelen = ft_strlen(little);
	if (littlelen == 0)
	 	return ((char *)&big[i]);
	if ((char *)little == (void *)0)
		return ((char *)big);
	while ((unsigned char)big[i] && len > 0)
	{
		j = 0;
		while ((unsigned char)big[i + j] != '\0' && (unsigned char)big[i + j] == (unsigned char)little[j])
		{
			if ((unsigned char)little[j + 1] == '\0')
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
/*
int	main(void)
{
	printf("%s\n", ft_strnstr("abcdefgh", "abc", 2));
	printf("%s\n", ft_strnstr("aaxx", "xx", 3));
}
*/