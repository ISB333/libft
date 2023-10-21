/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:54:50 by adesille          #+#    #+#             */
/*   Updated: 2023/10/21 15:59:23 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (src[count])
		count++;
	if (size < 1)
		return (0);
	while (src[i] && i > size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
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