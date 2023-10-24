/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:54:50 by adesille          #+#    #+#             */
/*   Updated: 2023/10/24 23:35:46 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	dstlen;
	unsigned int	srclen;
	unsigned int	i;
	char			*newdest;

	newdest = dst;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen((char *)src);
	if (size <= dstlen)
		return (size + srclen);
	i = 0;
	while (src[i] && i < size - dstlen - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + 1] = '\0';
	return (dstlen + srclen);
}
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	dstlen;
	unsigned int	srclen;
	char			*newdest;

	newdest = dst;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen((char *)src);
	if (size <= dstlen)
		return (size + srclen);
	ft_strlcpy(&dst[dstlen], src, size - dstlen);
	return (dstlen + srclen);
}

/*
int	main(void)
{
	printf("%zu\n%s\n", ft_strlcat(str1, str2, size),str1);
	printf("%zu\n%s", strlcat(str3, str4, size),str3);
}
*/