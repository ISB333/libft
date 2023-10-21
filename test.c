/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:00:59 by adesille          #+#    #+#             */
/*   Updated: 2023/10/21 15:57:53 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	printf("isalpha test: A = %d", ft_isalpha('A'));
	printf("isdigit test: 2 = %d", ft_isdigit('2'));
	printf("isalnum test: c = %d", ft_isalnum('c'));
	printf("isascii test: 125 = %d", ft_isascii(128));
//	printf("isprint test: 25 = %d", ft_isprint("25"));
	printf("strlen test: YoMan = %ld", ft_strlen("YoMan"));
//	printf("memset test: YoManito = %s", ft_memset("YoManito", '$', 3));
//	printf("bzero test: %d", ft_bzero(str[50], 20));
	// printf("is test: %d", ());
	// printf("is test: %d", ());
	// printf("is test: %d", ());
	// printf("is test: %d", ());
	printf("toupper test: %d", ft_toupper('a'));
	printf("tolower test: %d", ft_tolower('A'));
}
