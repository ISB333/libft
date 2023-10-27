/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 01:25:07 by adesille          #+#    #+#             */
/*   Updated: 2023/10/27 02:08:53 by adesille         ###   ########.fr       */
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

char	*ft_split(char const *s, char c)
{
	char *str;
	
	str = ft_strchr(s, c);
	return(str);
}

int main()
{
    const char *input_string = "Hello World! How are you?";
    char **result = ft_split(input_string, ' ');

    if (result == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    int i = 0;
    while (result[i] != NULL) {
        printf("%s\n", result[i]);
        free(result[i]);
        i++;
    }

    free(result);
    return 0;
}