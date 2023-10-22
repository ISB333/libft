/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:58:27 by adesille          #+#    #+#             */
/*   Updated: 2023/10/22 17:03:53 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	*arr;
	int	i;

	i = 0;
	arr = (int *) malloc((nmemb * size) * sizeof(unsigned long));
	if (arr == NULL)
		return (NULL);
	while (nmemb-- > 0)
		arr[i++] = 0;
	return (arr);
}

/*
int	main(void)
{
    int* ptr;
    int num_elements = 5;
    int* ptr2;

    ptr = (int*)calloc(num_elements, 'a');
	if (ptr == NULL) 
	{
		printf("L'allocation de mémoire a échoué.\n");
		return 1;
	}
    for (int i = 0; i < num_elements; i++) {
        printf("%d ", ptr[i]); 
    }
	printf("\n");
    free(ptr);
    ptr2 = (int*)ft_calloc(num_elements, 'a');
	if (ptr2 == NULL) 
	{
		printf("L'allocation de mémoire a échoué.\n");
		return 1;
	}
    for (int i = 0; i < num_elements; i++) {
        printf("%d ", ptr2[i]); 
    }
    free(ptr2);
    return 0;
}
*/