/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:58:55 by adesille          #+#    #+#             */
/*   Updated: 2023/10/22 16:48:13 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size )
{
	char	*memblock;
	size_t	i;

	memblock = (char *)memoryBlock;
	i = 0;
	while (memblock[i] && i < size)
	{
		if (memblock[i] == searchedChar)
			return ((char *)&memblock[i]);
		i++;
	}
	if (searchedChar == '\0')
		return ((char *)&memblock[i]);
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