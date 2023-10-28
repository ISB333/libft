/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 01:25:07 by adesille          #+#    #+#             */
/*   Updated: 2023/10/28 18:04:45 by adesille         ###   ########.fr       */
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

static char	**ft_allocncpy(char **array, const char *s, size_t size)
{
	size_t	s_len;
	int j;

	j = 0;
	s_len = ft_strlen(s);
	if (!array || !s || !size)
		return (array);
	array[j] = (char *)malloc((size - 1 * sizeof(char)));
	if (array[j] == NULL)
		return (0);
	while (*s && --size)
		*array[j]++ = *s++;
	*array[j] = '\0';
	j++;
	return (&array[j]);
}

static int	ft_del_rows(const char *s, int c)
{
	int	i;
	int rows;

	rows = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			rows++;
			
		i++;
	}
	return (rows);
}

static int	ft_rows_size(char **array, const char *s, int c, int rows)
{
	int	i;
	int j;
	int tempi;
	int token;

	i = 0;
	j = 0;
	tempi = 0;
	token = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			token++;
			if (token > 0)
			{
				ft_allocncpy(&array[i], &s[tempi], i - tempi - 1);
			}
			tempi = i;
		}
		i++;
		if (s[i] == '\0')
		{
			array[j] = (char *)malloc((i - tempi - 1) * sizeof(char));
			ft_allocncpy(&array[i], &s[tempi], i - tempi - 1);
		}
	}
	for (int i = 0; i < rows; i++)
        printf("%s is 1\n", array[i]);
	return (j);
}

char	*ft_split(char const *s, char c)
{
	char **array;
	int	rows;

	rows = ft_del_rows(s, c) + 1;
	array = (char **)malloc(rows * sizeof(char *));
	if (array == NULL)
		return(NULL);
	ft_rows_size(array, s, c, rows);
	return ((char *) s);
}

int main()
{
	const char	*input_string = "Hello World! How are you?";

	printf("%s\n\n", ft_split(input_string, ' '));
/*
    char		**result = ft_split(input_string, ' ');

    if (result == NULL) 
	{
		printf("Memory allocation failed.\n");
		return 1;
	}

	int i = 0;
	while (result[i] != NULL) 
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}

	free(result);
	return 0;
*/
}