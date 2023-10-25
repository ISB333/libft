/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:48:56 by adesille          #+#    #+#             */
/*   Updated: 2023/10/23 10:48:56 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	printf("%d\n", ft_isalpha(5));
	printf("%d\n", ft_isdigit(5));
	printf("%d\n", ft_isalnum(5));
	printf("%d\n", ft_isascii(5));
	printf("%d\n", ft_isprint(5));
/*
	size_t ft_strlen(const char *s);
	void *ft_memset(void *s, int c, size_t n);
	void ft_bzero(void *s, size_t n);
	void *ft_memcpy(void *dest, const void *src, size_t n);
	void *ft_memmove(void *dest, const void *src, size_t n);
	size_t ft_strlcpy(char *dest, char *src, unsigned int size);
	size_t ft_strlcat(char *dst, const char *src, size_t size);
	int ft_toupper(int c);
	int ft_tolower(int c);
	char *ft_strchr(const char *s, int c);
	char *ft_strrchr(const char *s, int c);
	int ft_strncmp(const char *s1, const char *s2, size_t n);
	void *ft_memchr(const void *s, int c, size_t n);
	int ft_memcmp(const void *s1, const void *s2, size_t n);
	char *ft_strnstr(const char *big, const char *little, size_t len);
	int ft_atoi(const char *nptr);
	void *ft_calloc(size_t nmemb, size_t size);
*/
}