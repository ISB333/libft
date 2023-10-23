/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:51:42 by adesille          #+#    #+#             */
/*   Updated: 2023/10/23 16:33:37 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;
	int		size;

	i = 0;
	size = strlen(s) + 1;
	str = malloc((size) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str = ft_memcpy(str, s, size - 1);
	str[size - 1] = '\0';
	return (str);
}
/*
int	main(void)
{
	const char *s = "Life is good";
	const char *s2 = "Life is good";

	printf("\e[0;33m%s\n", strdup(s));
	printf("\e[0;35m%s\n",ft_strdup(s2));
//	free(&s2);
}
*/