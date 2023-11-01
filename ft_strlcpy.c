/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:54:50 by adesille          #+#    #+#             */
/*   Updated: 2023/11/01 15:50:15 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if(!size)
		return(src_len);
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
	char	str3[] = "Life is a bitch";
	char	str4[] = "Life is wonderful";
	printf("%zu\n%s\n", ft_strlcpy(str1, str2, 0), str1);
	printf("%zu\n%s", strlcpy(str3, str4, 0), str3);
}
*/