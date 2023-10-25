/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:22:10 by adesille          #+#    #+#             */
/*   Updated: 2023/10/25 16:30:42 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (str1[i] - str2[i]);
}
/*
int main(void)
{
	char (unsigned char)str1[15] = "dfgfdg";
	char (unsigned char)str2[15] = "abcde";
	int ret;
	int ret2;

	ret = ft_memcmp((unsigned char)str1, (unsigned char)str2, 3);
	if (ret > 0)
		printf("(unsigned char)str2 is less than (unsigned char)str1\n");
	else if (ret < 0)
		printf("(unsigned char)str1 is less than (unsigned char)str2\n");
	else
		printf("(unsigned char)str1 is equal to (unsigned char)str2\n");

	ret2 = memcmp((unsigned char)str1, (unsigned char)str2, 3);
	if (ret2 > 0)
		printf("(unsigned char)str2 is less than (unsigned char)str1\n");
	else if (ret2 < 0)
		printf("(unsigned char)str1 is less than (unsigned char)str2\n");
	else
		printf("(unsigned char)str1 is equal to (unsigned char)str2\n");
}
*/