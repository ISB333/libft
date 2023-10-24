/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isb3 <isb3@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:54:50 by adesille          #+#    #+#             */
/*   Updated: 2023/10/24 09:20:51 by isb3             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = strlen(src);
	if (NULL == dst || NULL == src || !size)
		return (src_len);
	while (*src && --size)
		*dst++ = *src++;
	*dst = '\0';
	return (src_len);
}
/*
int	main(void)
{
	char	str1[] = "Life is a bitch";
	char	str2[] = "Life is wonderful";
	printf("%zu\n", ft_strlcpy(str1, str2, sizeof(str2)));
	printf("%zu", strlcpy(str1, str2, sizeof(str2)));
}
*/