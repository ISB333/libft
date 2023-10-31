/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_del_n_size_correct.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:08:46 by adesille          #+#    #+#             */
/*   Updated: 2023/10/31 13:05:45 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

void	ft_rows_size(const char *s, int c)
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
			// array[row] = malloc(i - tempi + 1 * sizeof(char));
			// ft_strlcpy(array[row], &s[tempi], i - tempi + 1);
			printf("size = %lu\n", i - tempi + 1);
			row++;
			tempi = i + 1;
		}
		if (s[i] == '\0')
		{
			// array[row] = malloc(i - tempi + 1 * sizeof(char));
			// ft_strlcpy(array[row], &s[tempi], i - tempi + 1);
			printf("size = %lu\n", i - tempi + 1);
		}
	}
	// array[row] = malloc(ft_strlen(s) - tempi + 1 * sizeof(char));
	// printf("%zu\n%zu\n%zu\n\n", ft_strlen(s) - tempi + 1, tempi, row);
}

char	**ft_split(char const *s, char c)
{
	// char **array;
	size_t	rows;

	rows = ft_del_rows(s, c);
	if (rows == 0)
		return (NULL);
	printf("rows = %zu\n", rows);
	// array = (char **)malloc(rows * sizeof(char *));
	// if (!array)
	// 	return(NULL);
	ft_rows_size(s, c);
	return ((char *)s);
}

int	main(void)
{
	char	*input_string = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";

	// ft_split(input_string, ' ');
	// ft_split("hello!", ' ');
	// ft_split("          ", ' ');

	printf("%s\n\n", ft_split(input_string, ' '));
	printf("%s\n\n", ft_split("Hello World! How are you?", ' '));
	printf("%s\n\n", ft_split("hello!", ' '));
	printf("%s\n\n", ft_split("          ", ' ')); // RETURN NULL
	printf("%s\n\n", ft_split("\0aa\0bbb", '\0')); // RETURN NULL
}
