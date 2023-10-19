/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:57:28 by adesille          #+#    #+#             */
/*   Updated: 2023/10/19 09:34:29 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*destcpy;
	char	*srccpy;

	destcpy = (char *)dest;
	srccpy = (char *)src;
	while (n > 0)
	{
		*destcpy++ = *srccpy++;
		n--;
	}
	return (dest);
}

int	main(void)
{
	char str1[] = "Life is a bitch";
	char str2[] = "Life is wonderful";
//	char str3[] = "Life is a bitch";
//	char str4[] = "Life is wonderful";

	printf("%s", (char *)ft_memcpy(str1, str2, sizeof(str2)));
//	puts(memcpy(str3, str4, sizeof(str4)));
}
