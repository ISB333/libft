/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:49:21 by adesille          #+#    #+#             */
/*   Updated: 2023/10/24 20:01:10 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1 // Allocate s1 size
// 2 // 
// 3 // 
/*
char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	char *str;

	i = 0;
	str = malloc(ft_strlen(s1) * sizeof(char));
	if(str == NULL)
		return (NULL);
	while (s1[i])
	{
		j = 0;
		while (s1[i + j] != '\0' && s1[i + j] == set[j])
		{
			if (set[j + 1] == '\0')
				return ((char *)&s1[j + 1]);
			j++;
		}
		i++;
	}
}*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char *str;
	size_t start;
	size_t end;
	size_t endset;

	start = 0;
	// if (str == NULL)
	// 	return (NULL);
	end = ft_strlen(s1) - 1;
	endset = ft_strlen(set) - 1;
	while (s1[start] == set[start])
		start++;
	while (s1[end] == set[endset] && end-- > 0)
		end--;
	str = malloc(((end - start) * sizeof(char)));
	ft_memcpy(str, &s1[start], end - start);
	return(str);
}
/*
int	main(void)
{
	printf("%s", ft_strtrim("Bonjour je m'appelle Bonjour, et Bonjour", "Bonjour"));
}
*/