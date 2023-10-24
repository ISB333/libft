/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:27:47 by adesille          #+#    #+#             */
/*   Updated: 2023/10/24 22:08:54 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while ((unsigned char)str1[i] && (unsigned char)str2[i] && i < n)
	{
		if ((unsigned char)str1[i] != (unsigned char)str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
/*
int	main(void)
{
	char	*(unsigned char *)str1 = "Salut";
	char	*(unsigned char *)str2 = "Sertaertalutfgdfgdfg";
	size_t n = 3;

	printf("%d", ft_strncmp((unsigned char *)str1, (unsigned char *)str2, n));
	printf("%d\n", strncmp((unsigned char *)str1, (unsigned char *)str2, n));
	char	*s3 = "Saldf";
	char	*s4 = "Salut";
	printf("%d", ft_strncmp(s3, s4, n));
	printf("%d\n", strncmp(s3, s4, n));
	char	*s5 = "Salut";
	char	*s6 = "Salut";
	printf("%d", ft_strncmp(s5, s6, n));
	printf("%d\n", strncmp(s5, s6, n));

}
*/