/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:42:44 by adesille          #+#    #+#             */
/*   Updated: 2024/05/21 12:13:07 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);
int	ft_putstr(char *str);
int	ft_pf_putchar(char c);
int	ft_pf_itoa(int n);
int	ft_itoa_unsigned(unsigned int n);
int	ft_put_hexa(unsigned int n, const char format);
int	ft_ptr(unsigned long long ptr);

#endif