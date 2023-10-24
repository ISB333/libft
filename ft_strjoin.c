/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:23:18 by adesille          #+#    #+#             */
/*   Updated: 2023/10/24 18:13:07 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1 // Allocate s1+s2 memory sizev + 1
// 2 // 

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	//cadeau , sinon tes strlen segfault avec des pointeurs NULL 
	if(s1 == NULL || s2 == NULL)
		return (NULL);
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, (ft_strlen(s1) + 1));
	ft_strlcpy(&str[ft_strlen(s1)], s2, (ft_strlen(s2) + 1));
	return(str);
}
/*
int main(void)
{
	printf("%s", ft_strjoin("YoMan", "Ca Va"));
}
*/