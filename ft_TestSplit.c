/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:05:39 by adesille          #+#    #+#             */
/*   Updated: 2023/10/31 13:56:08 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	**freememory(char **array)
{
	int i;

	i = 0;
	while(array[i])
		free(array[i++]);
	free(array);
	return (array);
}

static int	ft_count_words(const char *s, char c)
{
	int i;
	int count;

	count = 1;
	i = 0;
	while(*s)
	{
		while(*s++ != c && *s)
			if(*s == c)
				count++;
	}
	return(count);
}

static char	**ft_cpy(char **array, char const *s, char c)
{
	int i;
	int start;
	int row;

	i = 0;
	start = 0;
	row = 0;
	while(s[i])
	{
		while(s[i] != c && s[i++])
		{
			start = i;
			if(s[i] == c)
			{
				array[row] = (char *)malloc(i - start);
				if (array[row] == NULL)
					return(freememory(array));
				ft_strlcpy(array[row++], &s[start], i);
			}
		}
		i++;
		// if (s[i] == '\0')
	}
	return(array);
}

char	**ft_split(char const *s, char c)
{
	char **array;

	array = (char **)malloc(ft_count_words(s, c) * sizeof(char *));
	ft_cpy(array, s, c);
	return(array);
}

int main(void)
{
	// ft_split("Hello World! How are you?", ' ');
	// ft_split("hello!", ' ');
	// ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');

	// printf("%s\n\n\n", ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' '));
	// printf("%s\n\n\n", ft_split("Hello World! How are you?", ' '));
	// printf("%s\n\n\n", ft_split("hello!", ' '));

	// printf("%s\n\n", ft_split("          ", ' ')); // RETURN NULL
	// printf("%s\n\n", ft_split("\0aa\0bbb", '\0')); // RETURN NULL
    char		**result = ft_split("Hello World! How are you?", ' ');

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
}