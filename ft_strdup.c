/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isb3 <isb3@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:51:42 by adesille          #+#    #+#             */
/*   Updated: 2023/10/24 09:21:55 by isb3             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = strlen(src);
	if (NULL == dst || NULL == src || !dstsize)
		return (src_len);
	while (*src && --dstsize)
		*dst++ = *src++;
	*dst = '\0';
	return (src_len);
}


char	*ft_strdup(const char *s)
{
	char	*str;
	int		size;

	size = strlen(s) + 1;
	str = malloc(size);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s, size);
	return (str);
}
/*
int	main(void)
{
	const char *s = "Life is good";
	const char *s2 = "Life is good";

	printf("\e[0;33m%s\n", strdup(s));
	printf("\e[0;35m%s\n",ft_strdup(s2));
//	free(&s2);
}
*/