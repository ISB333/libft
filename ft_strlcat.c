/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:54:50 by adesille          #+#    #+#             */
/*   Updated: 2023/10/24 22:40:57 by adesille         ###   ########.fr       */
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
	while (src[i] && i < size - 1)
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
	printf("%zu\n%s\n", ft_strlcat(str1, str2, size),str1);
	printf("%zu\n%s", strlcat(str3, str4, size),str3);
}
*/