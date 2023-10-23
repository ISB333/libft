/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:05:19 by adesille          #+#    #+#             */
/*   Updated: 2023/10/23 17:59:38 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	int i;

	i = 0;
	str = malloc((len) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str = ft_memcpy(&str[start], s, len);
	str[i + 1] = '\0';
	return (str);
}
/*
int	main(void)
{
	printf("%s", ft_substr("YoMan", 3, 5));
}
*/