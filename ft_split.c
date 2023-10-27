/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 01:25:07 by adesille          #+#    #+#             */
/*   Updated: 2023/10/27 15:22:44 by adesille         ###   ########.fr       */
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

char	*ft_del_count(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

char	*ft_split(char const *s, char c)
{
	// char *str;
	int i;
	int count;

	i = 0;
	count = 0;
	count = ft_del_count(s, c);
	printf("%d\n", count);
	return((char *)s);
}

int main()
{
	const char	*input_string = "Hello World! How are you?";

	printf("%s", ft_split(input_string, ' '));
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