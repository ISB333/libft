/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:22:10 by adesille          #+#    #+#             */
/*   Updated: 2023/10/21 16:15:07 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char 	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (str1[i] && str2[2] && i < n)
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
	char str1[15] = "dfgfdg";
	char str2[15] = "abcde";
	int ret;
	int ret2;

	ret = ft_memcmp(str1, str2, 3);
	if (ret > 0)
		printf("str2 is less than str1\n");
	else if (ret < 0)
		printf("str1 is less than str2\n");
	else
		printf("str1 is equal to str2\n");

	ret2 = memcmp(str1, str2, 3);
	if (ret2 > 0)
		printf("str2 is less than str1\n");
	else if (ret2 < 0)
		printf("str1 is less than str2\n");
	else
		printf("str1 is equal to str2\n");
}
*/