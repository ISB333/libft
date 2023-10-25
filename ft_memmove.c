/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:16:00 by adesille          #+#    #+#             */
/*   Updated: 2023/10/25 16:28:54 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int 			i;
	unsigned char	*srcc;
	unsigned char	*destt;

	i = 0;
	srcc = (unsigned char *)src;
	destt = (unsigned char *)dest;
	if (src < dest)
	{
		while (n--)
			destt[n] = srcc[n];
		return (dest);
	}
	else if (src > dest)
	{
		while (n--)
		{
			destt[i] = srcc[i];
			i++;
		}
	}
	return (dest);
}
