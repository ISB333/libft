/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:11:00 by adesille          #+#    #+#             */
/*   Updated: 2023/10/26 14:44:26 by adesille         ###   ########.fr       */
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
int	main(void)
{
	ft_itoa(147483647, 1);
}
