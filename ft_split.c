/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:08:46 by adesille          #+#    #+#             */
/*   Updated: 2023/11/02 19:04:48 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	freememory(char **array)
// {
// 	int i;

// 	i = 0;
// 	while(array[i])
// 		free(array[i++]);
// 	free(array);
// }

static size_t	ft_del_rows(const char *s, int c)
{
	size_t	i;
	size_t	rows;

	rows = 0;
	i = 0;
	while (s[i])
	{
		while (s[i++] != c && s[i])
		{
			if (s[i] == c && s[i])
				rows++;
		}
		if (s[i] == '\0' && s[i - 1] != c)
			rows++;
	}
	if ((size_t)rows == ft_strlen(s))
		return (0);
	return (rows);
}

static char	**ft_cut(char **array, char const *s, char c, size_t i)
{
	size_t	k;
	size_t	j;

	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			k = i;
			while (s[i] && s[i] != c)
				i++;
			array[j] = ft_substr(s, k, i - k);
			if (!array[j])
			{
				free(array);
				return (NULL);
			}
			j++;
		}
	}
	array[j] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	array = (char **)malloc((ft_del_rows(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	ft_cut(array, s, c, i);
	return (array);
}
