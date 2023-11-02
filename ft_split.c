/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:08:46 by adesille          #+#    #+#             */
/*   Updated: 2023/11/02 16:11:12 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static char  **ft_cut(char **array, char const *s, char c, size_t i)
{
	size_t  k;
	size_t  j;
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
			// printf("%s\nstart = %zu\nend = %lu\n", &s[i], k, i - k);
			array[j] = ft_substr(s, k, i - k);
			if (!array[j]) 
			{
				free(array);
				return(NULL);
			}
			// printf("%s\n\n\n", array[j]);
			j++;
		}
	}
	array[j] = NULL;
	return (array);
}

char  **ft_split(char const *s, char c)
{
	char  **array;
	size_t  i;

	i = 0;
	if (!s)
		return (NULL);
	// printf("s len = %zu\n", ft_strlen(s + 1));
	array = (char **)malloc((ft_del_rows(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	ft_cut(array, s, c, i);
	// printf("\n\n");
	return (array);
}
/*
int	main(void)
{
	char	*input_string = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";

	ft_split(input_string, ' ');
	// ft_split("Hello World! How are you?", ' ');
	// ft_split("     Hello World!      How are you?", ' ');
	// ft_split("      split       this for   me  !       ", ' ');
	// ft_split("hello!", ' ');
	// ft_split("xxxxxxxxhello!", 'x');
	// ft_split("hello!zzzzzzzz", 'z');
	// ft_split("\t\t\t\thello!\t\t\t\t", '\t');
	// ft_split("\0aa\0bbb", '0');
	// ft_split("split  ||this|for|me|||||!|", '|');
	// ft_split("      split       this for   me  !       ", ' ');

	// printf("%s\n\n", ft_split(input_string, ' '));
	// printf("%s\n\n", ft_split("Hello World! How are you?", ' '));
	// printf("%s\n\n", ft_split("     Hello World!      How are you?", ' '));
	// printf("%s\n\n", ft_split("      split       this for   me  !       ", ' '));
	// printf("%s\n\n", ft_split("hello!", ' '));
	// printf("%s\n\n", ft_split("          ", ' ')); // RETURN NULL
	// printf("%s\n\n", ft_split("\0aa\0bbb", '\0')); // RETURN NULL
}
*/