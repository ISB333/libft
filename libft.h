/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:27:09 by adesille          #+#    #+#             */
/*   Updated: 2023/10/19 10:49:22 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(int c);
void *memset(void *str, int c, size_t n);
int	bzero(int c);
int	memcpy(int c);
int	memove(int c);
size_t	ft_strlcpy(char *dest, char *src, unsigned int size);
int	strlcat(int c);
int	toupper(int c);
int	tolower(int c);
int	strchr(int c);
int	strrchr(int c);
int	strncmp(int c);
int	memchr(int c);
int	memcmp(int c);
int	strnstr(int c);
int	atoi(int c);

#endif