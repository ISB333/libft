/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:05:19 by adesille          #+#    #+#             */
/*   Updated: 2023/10/24 15:04:47 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1 // Alocate memory
// 2 // Copy from s[start] into str while len-- > 0
// 3 // return str or NULL if allocation failed

//###// Special Cases //###//
// *1* // len = 0; || start = 0;
// *2* // len > start || start > len
// *3* //

//###// 

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		size;

	size = (ft_strlen(s));
	if (start > ((unsigned int)size + 1))
		return ("");
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, &s[start], len + 1);
	if ((size <= 0 && len <= 0) || start <= 1 || len <= 1 || (int)len == size)
		str[len] = '\0';
	str[len + 1] = '\0';
	return (str);
}
/*
int	main(void)
{
	printf("%s\n", ft_substr("YoMan", 2, 5));
	printf("%s\n", ft_substr("", 0, 0));
//	printf("%s", ft_substr("Hola", 4294967295, 0));
}
*/