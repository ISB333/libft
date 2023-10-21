/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:59:22 by adesille          #+#    #+#             */
/*   Updated: 2023/10/21 18:46:19 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

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
	while (bigstr[i])
	{
		if (bigstr[i] == littlestr[j] && len > 0)
			return ((char *)&bigstr[i]);		
		i++;
		len--;
	}
	return (littlestr);
}

int	main(void)
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";

	printf("%s\n", strnstr(largestring, smallstring, 15));
	printf("%s\n", strnstr(largestring, smallstring, 5));
	printf("%s\n", strnstr(largestring, smallstring, 7));
	printf("%s\n", ft_strnstr(largestring, smallstring, 15));
	// printf("%s", strnstr(largestring, smallstring, 15));
	// printf("%s", strnstr(largestring, smallstring, 15));
}