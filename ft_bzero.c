/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:14:51 by adesille          #+#    #+#             */
/*   Updated: 2023/10/18 13:33:11 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_bzero(void *str, size_t n)
{
	unsigned char	*strcp;

	strcp = str;
	while (n > 0)
	{
		*strcp = '\0';
		strcp++;
		n--;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[50];

	strcpy(str, "This is string.h library function");
	puts(str);
	puts(ft_bzero(str, 7));
}
*/