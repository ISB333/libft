/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:59:22 by adesille          #+#    #+#             */
/*   Updated: 2023/10/22 16:51:00 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

// 1. Manage NULL
// 2. While we're not at the end of bigstr[i+j] AND bigstr[i+j] != littlestr[j]
// 3. If littlestr[j+1] == '\0' = return &bigstr[i] 

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	char	*littlestr;
	char	*bigstr;

	i = 0;
	j = 0;
	littlestr = (char *) little;
	bigstr = (char *) big;
	if (littlestr == (void *)0)
		return (littlestr);
	while (bigstr[i] && len > 0)
	{
		j = 0;
		while (bigstr[i + j] != '\0' && bigstr[i + j] == littlestr[j])
		{
			if (littlestr[j + 1] == '\0')
				return ((char *)&bigstr[i]);
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
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";

	printf("%s\n", strnstr(largestring, smallstring, 15));
	printf("%s\n", strnstr(largestring, smallstring, 5));
	printf("%s\n\n", strnstr(largestring, smallstring, 7));
	printf("%s\n", ft_strnstr(largestring, smallstring, 15));
	printf("%s\n", strnstr(largestring, smallstring, 5));
	printf("%s\n", strnstr(largestring, smallstring, 7));
}
*/