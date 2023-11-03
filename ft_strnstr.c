/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isb3 <isb3@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:59:22 by adesille          #+#    #+#             */
/*   Updated: 2023/11/03 18:46:36 by isb3             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <bsd/string.h>
// #include <stdio.h>

// 1. Manage NULL
// 2. While we're not at the end of bigstr[i+j] AND bigstr[i+j] != littlestr[j]
// 3. If littlestr[j+1] == '\0' = return &bigstr[i] 

static char	*find(const char *big, const char *little, size_t len, int lillen)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (big[i] && len > 0)
	{
		j = 0;
		while (big[i + j] != '\0' && big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
			{
				if ((size_t)(lillen) > len)
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

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	lillen;
	int	i;

	i = 0;
	lillen = ft_strlen(little);
	if ((big == NULL || little == NULL) && len == 0)
		return (0);
	if (lillen == 0)
		return ((char *)&big[i]);
	if ((char *)little == (void *)0)
		return ((char *)big);
	return (find(big, little, len, lillen));
}
