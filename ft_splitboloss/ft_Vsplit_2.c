/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 01:25:07 by adesille          #+#    #+#             */
/*   Updated: 2023/10/30 13:01:22 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// 0 /// while *s = strchr that return number of rows
/// 1 /// allocate number of rows
///////// while rowsnbr > 0;
/// 2 /// 	strchr with incrementation to give colsize
/// 3 /// 	allocate (colsize) 
/// 4 /// 	strlcpy[str[i], s, colsize]
///////// rowsnbr--;

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
	return (rows + 1);
}

static char	**ft_rows_size(char **array, const char *s, int c)
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
			array[row] = malloc(i - tempi + 1);
			if (!array[row])
				free(array[row]);
			ft_strlcpy(array[row++], &s[tempi], i - tempi + 1);
			tempi = i + 1;
		}
		if (s[i] == '\0')
		{
			array[row] = malloc(i - tempi + 1);
			// printf("%zu\n%zu\n%zu\n\n", ft_strlen(s) - tempi + 1, i);
			ft_strlcpy(array[row], &s[tempi], i - tempi + 1);
			if (!array[row])
				free(array[row]);
		}
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char **array;
	size_t	rows;

	rows = ft_del_rows(s, c);
	if (rows - 1 == ft_strlen(s))
		rows = 1;
	array = (char **)malloc(rows * sizeof(char *));
	if (array == NULL)
		return(NULL);
	// if (rows == 1)
	// 	return()
	ft_rows_size(array, s, c);
	return (array);
}
/*
int main()
{
	const char	*input_string = "Hello World! How are you?";

	// printf("%s\n\n", ft_split(input_string, ' '));

    char		**result = ft_split(input_string, ' ');

    if (result == NULL) 
	{
		printf("Memory allocation failed.\n");
		return 1;
	}
	int i = 0;
	while (result[i] != NULL) 
	{
		if (result[i] != NULL)
		{
			printf("%s\n", result[i]);
			free(result[i]);
		}
		i++;
	}
	free(result);
	return 0;
}
*/