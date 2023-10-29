/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 01:25:07 by adesille          #+#    #+#             */
/*   Updated: 2023/10/29 16:01:05 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// FT0 /// count delimiters
/// FT1 /// allocate number of rows + 2 (for last and NULL)
/// FT2 /// allocate colsize
/// FT3 /// copy into each row


static int count_rows(const char *s, int c) {
    int count = 0;
    while (*s) {
        if (*s == (char)c) {
            count++;
            while (*s == (char)c)
                s++;
        } else {
            s++;
        }
    }
    return count;
}

static char **allocate_memory(const char *s, int c, int rows) {
    char **array = malloc((rows + 1) * sizeof(char *));
    if (!array)
        return NULL;

    const char *start = s;
    int i = 0;
    while (*s) {
        if (*s == (char)c) {
            int len = s - start;
            array[i] = malloc((len + 1) * sizeof(char));
            if (!array[i])
                return NULL;
            ft_strlcpy(array[i], start, len + 1);
            i++;
            while (*s == (char)c)
                s++;
            start = s;
        } else {
            s++;
        }
    }

    int len = s - start;
    array[i] = malloc((len + 1) * sizeof(char));
    if (!array[i])
        return NULL;
    ft_strlcpy(array[i], start, len + 1);

    array[i + 1] = NULL;
    return array;
}

char **ft_split(const char *s, char c) {
    int rows = count_rows(s, c);
    if (rows == 0)
        return NULL;

    char **array = allocate_memory(s, c, rows);
    return array;
}
/*
int main() {
    const char *input_string2 = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";

    char **result = ft_split(input_string2, ' ');

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

*/





/*
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
	if (rows == 0)
		return (rows + 2);
	if (rows == ft_strlen(s))
		return (0);
	return (rows);
}

static char	**ft_rows_size(char **array, const char *s, int c)
{
	size_t	i;
	size_t tempi;
	size_t row;

	row = 0;
	i = 0;
	tempi = 0;
	while (s[i++])
	{
		if (s[i] == (char)c)
		{
			array[row] = malloc(i - tempi + 1 * sizeof(char));
			if (!array[row])
				return(NULL);
			ft_strlcpy(array[row++], &s[tempi], i - tempi + 1);
			tempi = i + 1;
		}
	}
	array[row] = malloc(ft_strlen(s) - tempi + 1 * sizeof(char));
	printf("%zu\n%zu\n%zu\n\n", ft_strlen(s) - tempi + 1, tempi, row);
	ft_strlcpy(array[row], &s[tempi], ft_strlen(s) - tempi + 1);
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char **array;
	size_t	rows;

	rows = ft_del_rows(s, c);
	printf("%zu\n\n", rows);
	array = (char **)malloc(rows * sizeof(char *));
	if (!array)
		return(NULL);
	ft_rows_size(array, s, c);
	return (array);
}

int main()
{
	// const char	*input_string = "Hello World! How are you?";
	const char	*input_string2 = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";

    char		**result = ft_split(input_string2, ' ');

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
    return(0);
}
*/