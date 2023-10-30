/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:08:46 by adesille          #+#    #+#             */
/*   Updated: 2023/10/30 16:45:59 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void freememory(char **array)
{
	int i;

	i = 0;
	while(array[i])
		free(array[i++]);
	free(array);
}

static int	ft_del_rows(const char *s, int c)
{
	size_t	i;
	size_t rows;

	rows = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			rows++;
		i++;
	}
	if (rows == ft_strlen(s))
		return (0);
	return (rows + 1);
}

char	**ft_rows_size(char **array, const char *s, int c)
{
	size_t	i;
	size_t tempi;
	size_t row;

	row = 0;
	i = 0;
	tempi = 0;
	while (s[i++])
	{
		if (s[i] == (char)c)
		{
			array[row] = malloc(i - tempi + 1 * sizeof(char));
			if (array[row] == NULL)
			{
				freememory(array);
				return (array);
			}
			ft_strlcpy(array[row], &s[tempi], i - tempi + 1);
			// printf("%s\n", array[row]);
			row++;
			tempi = i + 1;
		}
		if (s[i] == '\0')
		{
			array[row] = malloc(i - tempi + 1 * sizeof(char));
			if (array[row] == NULL)
			{
				freememory(array);
				return (array);
			}
			ft_strlcpy(array[row], &s[tempi], i - tempi + 1);
			// printf("%s\n\n", array[row]);
		}
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char **array;
	size_t	rows;

	rows = ft_del_rows(s, c);
	if (rows == 0)
		return (NULL);
	array = (char **)malloc(rows * sizeof(char *));
	if (!array)
		return(NULL);
	ft_rows_size(array, s, c);
	return (array);
}
/*
int	main(void)
{
	char	*input_string = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";

	ft_split(input_string, ' ');
	ft_split("Hello World! How are you?", ' ');
	ft_split("hello!", ' ');

	// printf("%s\n\n\n", ft_split(input_string, ' '));
	// printf("%s\n\n\n", ft_split("Hello World! How are you?", ' '));
	// printf("%s\n\n\n", ft_split("hello!", ' '));

	// printf("%s\n\n", ft_split("          ", ' ')); // RETURN NULL
	// printf("%s\n\n", ft_split("\0aa\0bbb", '\0')); // RETURN NULL
}
*/