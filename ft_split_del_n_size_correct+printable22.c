/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_del_n_size_correct+printable22.c          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:08:46 by adesille          #+#    #+#             */
/*   Updated: 2023/11/01 15:53:30 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static	char	**freememory(char **array)
// {
// 	int i;

// 	i = 0;
// 	while(array[i])
// 		free(array[i++]);
// 	free(array);
// 	return (array);
// }

static int	ft_del_rows(const char *s, int c)
{
	int i;
	int rows;

	rows = 0;
	i = 0;
	while(s[i])
	{
		while(s[i++] != c && s[i])
			if(s[i] == c)
				rows++;
	}
	if ((size_t)rows == ft_strlen(s))
		return (0);
	return (rows + 1);
}

void	ft_rows_size(char **array, const char *s, int c)
{
	size_t	i;
	size_t start;
	size_t row;

	row = 0;
	i = 0;
	start = 0;
	while (s[i])
	{
		start = i;
		while(s[i++] != c && s[i])
			if(s[i] == c)
			{
				array[row] = ft_substr(&s[start], 0, i - start + 1);
				printf("size = %lu\n%s\n%s\n\n", i - start + 1, &s[start], array[row]);
				row++;
			}
		if (s[i] == '\0')
		{
			array[row] = ft_substr(&s[start], 0, i - start + 1);
			printf("size = %lu\n%s\n%s\n\n", i - start + 1, &s[start], array[row]);
		}
	}
}

char	*ft_split(char const *s, char c)
{
	char **array;
	size_t	rows;

	rows = ft_del_rows(s, c);
	printf("rows = %zu\n", rows);
	if (rows == 0)
		return (NULL);
	array = (char **)malloc(rows * sizeof(char *));
	if (!array)
		return(NULL);
	ft_rows_size(array, s, c);
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
	printf("%s\n\n", ft_split("     Hello World!      How are you?", ' '));
	printf("%s\n\n", ft_split("hello!", ' '));
	// printf("%s\n\n", ft_split("          ", ' ')); // RETURN NULL
	// printf("%s\n\n", ft_split("\0aa\0bbb", '\0')); // RETURN NULL
}
