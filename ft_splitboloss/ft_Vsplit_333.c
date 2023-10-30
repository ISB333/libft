/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 01:25:07 by adesille          #+#    #+#             */
/*   Updated: 2023/10/30 12:23:47y adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// FT0 /// count delimiters
/// FT1 /// allocate number of rows + 1 (for the NULL)
/// FT2 /// allocate colsize
/// FT3 /// copy into each row

///*****/// TODO ///*****/// Have the exact delimiters numbers
///*****/// TODO ///*****/// check the colsize

///*****/// SECIAL CASES ///*****///
// 1 // ft_split("hello!", 32:' ');
// 2 // const char	*input_string2 = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
///////  ft_split(input_string2, ' ');
// 3 // ft_split("          ", ' ');
// 4 // ft_plit("\0aa\0bbb", '\0');


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
			array[row] = malloc(i - tempi + 1 * sizeof(char));
			ft_strlcpy(array[row], &s[tempi], i - tempi + 1);
			// printf("size = %lu\n", i - tempi);
			row++;
			tempi = i + 1;
		}
		if (s[i] == '\0')
		{
			array[row] = malloc(i - tempi + 1 * sizeof(char));
			ft_strlcpy(array[row], &s[tempi], i - tempi + 1);
			// printf("size = %lu\n", i - tempi);
			tempi = i + 1;
		}
	}
	// array[row] = malloc(ft_strlen(s) - tempi + 1 * sizeof(char));
	// printf("%zu\n%zu\n%zu\n\n", ft_strlen(s) - tempi + 1, tempi, row);
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char **array;
	size_t	rows;

	rows = ft_del_rows(s, c);
	if (rows - 1 == ft_strlen(s))
		rows = 1;
	printf("rows = %zu\n", rows);
	array = (char **)malloc(rows * sizeof(char *));
	if (!array)
		return(NULL);
	ft_rows_size(array, s, c);
	return (s);
}

int	main(void)
 {
// 	char	*input_string = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
	char	*input_string = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";

	// ft_del_rows(input_string, ' ');
	// ft_del_rows("hello!", ' ');
	// ft_del_rows("          ", ' ');

	// ft_split(input_string, ' '));
	// printf("%s\n\n", ft_split("Hello World! How are you?", ' '));
	// printf("%s\n\n", ft_split("hello!", ' '));

//	printf("%s\n\n", ft_split("          ", ' ')); // RETURN NULL
	// printf("string with \\0and del \\0 = %d\n", ft_del_rows("\0aa\0bbb", '\0')); // RETURN NULL
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
    return(0);
}
