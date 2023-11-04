/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isb3 <isb3@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:08:46 by adesille          #+#    #+#             */
/*   Updated: 2023/11/04 16:15:21 by isb3             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	freememory(char **array, size_t j)
{
	int	i;

	i = (int)j;
	while(i > 0)
	{
		free(array[i]);
		i--;
	}
	free(array);
}

static size_t	ft_del_rows(const char *s, int c)
{
	size_t	i;
	size_t	rows;

	rows = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			rows++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (rows);
}

static char	**ft_cut(char **array, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
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
				while (j-- > 0)
					free(array[j]);
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

	if (!s)
		return (NULL);

	array = (char **)malloc((ft_del_rows(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);

	array = ft_cut(array, s, c);
	return (array);
}
