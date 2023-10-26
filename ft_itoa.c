/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:11:00 by adesille          #+#    #+#             */
/*   Updated: 2023/10/26 15:12:36 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digitcount(int n)
{
	int	temp;
	int	digitnbr;

	temp = n;
	digitnbr = 1;
	while (temp >= 10) 
	{
		temp /= 10;
		digitnbr++;
	}
	return (digitnbr);
}

void	ft_itoa(int n, int fd)
{
	int digitnbr;

	digitnbr = digitcount(n);
	ft_putnbr_fd(digitnbr, fd);
}

void	ft_putchar(int c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
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
}

int	main(void)
{
	ft_itoa(147483647, 1);
}
