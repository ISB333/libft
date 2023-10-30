/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:08:46 by adesille          #+#    #+#             */
/*   Updated: 2023/10/30 13:14:59 by adesille         ###   ########.fr       */
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
	return (rows + 1);
}
int	main(void)
{
	char	*input_string = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";

	// ft_del_rows(input_string, ' ');
	// ft_del_rows("hello!", ' ');
	// ft_del_rows("          ", ' ');

	printf("%s\n\n", ft_del_rows(input_string, ' '));
	printf("%s\n\n", ft_del_rows("Hello World! How are you?", ' '));
	printf("%s\n\n", ft_del_rows("hello!", ' '));
	printf("%s\n\n", ft_del_rows("          ", ' ')); // RETURN NULL
	printf("string with \\0and del \\0 = %d\n", ft_del_rows("\0aa\0bbb", '\0')); // RETURN NULL
}
