/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:11:00 by adesille          #+#    #+#             */
/*   Updated: 2023/10/25 23:16:28 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(int c, int fd)
{
	write(fd, &c, 1);
}

void	ft_itoa(int n, int fd)
{
	int temp;
    int num_digits;

	temp = n;
    num_digits = 1;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', fd);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar(n % 10 + '0', fd);
    while (temp >= 10) 
	{
        temp /= 10;
        num_digits++;
    }
	
}
/*
int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
}
*/