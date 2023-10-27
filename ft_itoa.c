/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:11:00 by adesille          #+#    #+#             */
/*   Updated: 2023/10/27 01:23:18 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int digitcount(int n)
{
    int temp;
    int digitlen;

    temp = n;
    digitlen = 1;
    if (temp < 0)
        temp = -temp;
    while (temp >= 10)
    {
        temp /= 10;
        digitlen++;
    }
    return (digitlen);
}

char *ft_putnbr(int n, int digitlen, char *numbers)
{
    int end = digitlen - 1;
    int trueend = digitlen;

    if (n < 0)
    {
        numbers[0] = '-';
        n = -n;
    }
    while (end >= 0)
    {
        numbers[end] = n % 10 + '0';
        n /= 10;
        end--;
    }
    numbers[trueend] = '\0'; 
    return (numbers);
}

char *ft_itoa(int n)
{
    int digitlen;
    char *numbers;

    if (n == -2147483648)
        return ("-2147483648");
    digitlen = digitcount(n);
    if (n < 0)
        numbers = malloc(digitlen + 2);
    else
        numbers = malloc(digitlen + 1);
    if (numbers == NULL)
        return (NULL);

    numbers = ft_putnbr(n, digitlen, numbers);
    return (numbers);
}
/*
int main(void)
{
	// printf("%s\n", ft_itoa(1000034));
	printf("%s\n", ft_itoa(-10004));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(-623));
	printf("%s\n", ft_itoa(156));
	printf("%s\n", ft_itoa(-0));
}
*/
/*
int main(void)
{
    char *result = ft_itoa(-10004);
    if (result != NULL) {
        printf("%s\n", result);
        free(result); // Remember to free allocated memory
    }

    return 0;
}
*/