/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:16:00 by adesille          #+#    #+#             */
/*   Updated: 2023/10/22 16:45:27 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>

/*
 * Move block of memory 
 * Copies the values of 
 * 		~len bytes from the location 
 * 		~pointed by source to the memory block 
 * 		~pointed by destination. 
 *
 * Copying takes place as if an intermediate buffer were used,
 * allowing the destination and source to overlap.
 *
 *
    if memcpy copies "front to back" and the memory blocks are aligned as this
[---- src ----]
            [---- dst ---]
copying the first byte of src to dst already destroys the content 
of the last bytes of src before these have been copied. 
Only copying "back to front" will lead to correct results.

Now swap src and dst:

[---- dst ----]
            [---- src ---]
*/

// 1. Checking if there is an overlap. If there is, copies the data to a temporary buffer before writing it to dest
// 2. if there is no overlap, operates like memcpy 
i
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*destcpy;
	char	*srccpy;

	destcpy = (char *)dest;
	srccpy = (char *)src;
	if (destcpy == NULL && srccpy == NULL)
		return (NULL);
	while (n > 0)
	{
		*destcpy++ = *srccpy++;
		n--;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	typedef unsigned char byte;
	if ((NULL == src && NULL == dest) || n < 0)
		return (dest);
	if (dest > src)
		while (n--)
			*((byte *)dest + n) = *((byte *)src + n);
	else
		ft_memcpy(dest, src, n);
	return (dest);
}


int	main(void)
{
	char	source[] = "Bonjour";
	char	destination[] = "Hello, World";
	char	source2[] = "Bonjour";
	char	destination2[] = "Hello, World";

	printf("La chaîne copiée est : %s\n", (char *)memmove(destination, source, strlen(source) + 1));
	printf("La chaine copiee est : %s\n", (char *)ft_memmove(destination2, source2, strlen(source2 + 1)));
	return (0);
}
