/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 01:25:07 by adesille          #+#    #+#             */
/*   Updated: 2023/10/27 19:38:25 by adesille         ###   ########.fr       */
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

static int	ft_rows_size2(const char *s, int c)
{
	int	i;
	int rows;

	rows = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return(ft_strlen(&s[i]));
		i++;
	}
	return(0);
}

static int	ft_rows_size(const char *s, int c)
{
	int	i;
	int rows_size;
	int slen;

	rows_size = 0;
	i = 0;
	slen = ft_strlen((char *)s);
	while(*s)
	{
		s++;
		printf("%d\n", slen - ft_rows_size2(s, c));
	}
	return (rows_size);
}

char	*ft_split(char const *s, char c)
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