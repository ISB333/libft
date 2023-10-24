/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:51:42 by adesille          #+#    #+#             */
/*   Updated: 2023/10/24 15:56:28 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 


char	*ft_strdup(const char *s)
{
	char	*str;
	int		size;

	size = strlen(s) + 1;
	str = malloc(size);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s, size);
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