/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:27:47 by adesille          #+#    #+#             */
/*   Updated: 2023/10/19 15:19:02 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int res;
	size_t i;

	i = 0;
	res = 0;
	while (s1[i] && s2[2] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
		if (i == n)
			return (0);
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	*s1 = "Salut";
	char	*s2 = "Sertaertalutfgdfgdfg";
	size_t n = 3;

	printf("%d", ft_strncmp(s1, s2, n));
	printf("%d\n", strncmp(s1, s2, n));
	char	*s3 = "Saldf";
	char	*s4 = "Salut";
	printf("%d", ft_strncmp(s3, s4, n));
	printf("%d\n", strncmp(s3, s4, n));
	char	*s5 = "Salut";
	char	*s6 = "Salut";
	printf("%d", ft_strncmp(s5, s6, n));
	printf("%d\n", strncmp(s5, s6, n));

}