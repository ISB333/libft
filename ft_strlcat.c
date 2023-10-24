/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:54:50 by adesille          #+#    #+#             */
/*   Updated: 2023/10/24 11:59:10 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	count;
	unsigned int	count2;
	unsigned int	i;

	i = 0;
	count = ft_strlen(dst);
	count2 = ft_strlen((char *)src);
	if (size <= count)
		return (size + ft_strlen((char *)src));
	while (src[i] && i < size)
	{
		dst[count + i] = src[i];
		i++;
	}
	dst[count + i] = '\0';
	return (count + count2);
}
/*
int	main(void)
{
	size_t size = 15;
	char	str1[50] = "123456789";
	const char	str2[50] = "abcde";
	char	str3[50] = "123456789";
	const char	str4[50] = "abcde";

	printf("%zu\n%s\n", ft_strlcat(str1, str2, size),str1);
	printf("%zu\n%s", strlcat(str3, str4, size),str3);
}
*/