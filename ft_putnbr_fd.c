/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:11:00 by adesille          #+#    #+#             */
/*   Updated: 2023/10/25 22:29:39 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(int c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int nbr;

	nbr = 0;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	if (n < 0)
		ft_putchar('-', fd);
	if (n > 10)
	{
		mod = n % 10;
		ft_putnbr_fd(n / 10, fd);
		ft_putchar(nbr, fd);
	}
	if (n < 10)
	{
		n -= 48;
		ft_putchar(n, fd);
	}
}

int	main(void)
{
	ft_putnbr_fd(3, 1);
}