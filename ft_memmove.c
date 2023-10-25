/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:16:00 by adesille          #+#    #+#             */
/*   Updated: 2023/10/25 14:16:38 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

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
// 2.1 If there is no overlap or if src > dest, copy from start to end  
// 2.2 If there is dest > src, copy from end to start

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		destlen;
	int		srclen;
	char	*srcc;
	char	*destt;

	destlen = ft_strlen(dest) + 1;
	srclen = ft_strlen(src) + 1;
	srcc = (char *)src;
	destt = (char *)dest;
	if (srclen < destlen)
		ft_strlcpy(dest, src, n);
	while (srclen < 0)
		srcc[srclen--] = destt[destlen--];
	return (destt);
}

int	main(void)
{
	char	source[] = "Bonjour";
	char	destination[] = "Hello, World";
	char	source2[] = "Bonjour";
	char	destination2[] = "Hello, World";

	char	source3[] = "Bonjour ElMondo";
	char	destination3[] = "Hello";
	char	source4[] = "Bonjour ElMondo";
	char	destination4[] = "Hello";

	char	source5[] = "Bonjour";
	char	destination5[] = "Bonjour";
	char	source6[] = "Bonjour";
	char	destination6[] = "Bonjour";

	// ft_memmove(destination2, source2, strlen(source2 + 1));
	// ft_memmove(destination4, source4, strlen(source4 + 1));
	// ft_memmove(destination6, source6, strlen(source6 + 1));
	printf("src overlap : TRUE : %s\n", (char *)memmove(destination, source, strlen(source) + 1));
	printf("src overlap : COPY : %s\n\n\n", (char *)ft_memmove(destination2, source2, strlen(source2 + 1)));
	printf("dest overlap : TRUE : %s\n", (char *)memmove(destination3, source3, strlen(source3 + 1)));
	printf("dest overlap : COPY : %s\n\n\n", (char *)ft_memmove(destination4, source4, strlen(source4 + 1)));
	printf("no overlap : TRUE : %s\n", (char *)memmove(destination5, source5, strlen(source5) + 1));
	printf("no overlap : COPY : %s\n", (char *)ft_memmove(destination6, source6, strlen(source6 + 1)));
	return (0);
}
