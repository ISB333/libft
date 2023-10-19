/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:54:50 by adesille          #+#    #+#             */
/*   Updated: 2023/10/19 13:00:28 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include <strings.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	count;
	unsigned int	count2;
	unsigned int	i;

	i = 0;
	count = ft_strlen(dst);
	count2 = ft_strlen((char *)src);
	if (size < 1)
		return (0);
	while (src[i] && i > size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (count + count2);
}

int	main(void)
{
	size_t a = 23;
	char	str1[] = "Life is a bitch";
	const char	str2[] = "Life is wonderfulwfc";
	char	str3[] = "Life is a bitch";
	const char	str4[] = "Life is wonderfulwfc";

	printf("%zu\n", ft_strlcat(str1, str2, a));
	printf("%zu", strlcat(str3, str4, a));
}
