/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vsplit_0.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 01:25:07 by adesille          #+#    #+#             */
/*   Updated: 2023/10/31 13:05:18 by adesille         ###   ########.fr       */
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

static int	ft_rows_size(const char *s, int c)
{
	int	i;
	int tempi;
	int rows_size;

	rows_size = 0;
	i = 0;
	tempi = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			printf("i = %d\ntempi = %d\ni - tempi = %d\n\n", i, tempi, i - tempi - 1); //Allocate memory for each row 
			tempi = i;
		}
		i++;
		if (s[i] == '\0')
			printf("last word = %lu\n\n", ft_strlen(s) - tempi - 1); //Allocate memory for last row
	}
	return (rows_size);
}

char	**ft_split(char const *s, char c)
{
	char **array;
	int	rows;

	rows = ft_del_rows(s, c);
	array = (char **)malloc(rows * sizeof(char *));
	if (array == NULL)
		return(NULL);
	ft_rows_size(s, c);
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