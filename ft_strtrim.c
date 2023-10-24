/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:49:21 by adesille          #+#    #+#             */
/*   Updated: 2023/10/24 21:49:12 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1 // Check if (sizeof s1 < set) = NULL
// 2 // Find Start and End Position 
// 3 // Allocate Memory(size - (end - start))
// 4 // 
char	*ft_strstr(char const *s1, char const *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s1[i + j] != '\0' && s1[i + j] == s2[j])
		{
			if (s2[j + 1] == '\0')
				return ((char *)&s1[j + 1]);
			j++;
		}
		i++;
	}
	return(0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	// size_t start;
	// size_t end;
	// size_t setend;

	// // start = 0;
	printf("%s\n", ft_strstr(s1, set));
	return ((char *)s1);
}
/*
int	main(void)
{
	printf("%s", ft_strtrim("Bonjour je m'appelle Bonjour, et Bonjour", "Bonjour"));
}
*/