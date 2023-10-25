/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:58:55 by adesille          #+#    #+#             */
/*   Updated: 2023/10/25 13:21:22 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t size )
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < size)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char str[] = "https://www.tutorialspoint.com";
	const char ch = '.';
	char *ret;

	ret = ft_memchr(str, ch, 8);
	printf("String after |%c| is - |%s|\n", ch, ret);
}
*/