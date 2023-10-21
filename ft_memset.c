/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:14:51 by adesille          #+#    #+#             */
/*   Updated: 2023/10/21 15:59:13 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int i;

	i = 0;
	while (n-- > 0)
		((char *)s)[i++] = c;
	return (s);
}
/*
int	main(void)
{
	char	str[50];

	strcpy(str, "This is string.h library function");
	puts(str);
	printf("%s", (char *) ft_memset(str, '$', 7));
}
*/