/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:57:25 by huozkale          #+#    #+#             */
/*   Updated: 2023/10/26 15:26:26 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_control(va_list arg, char c);
int	ft_putchar(char c);
int	ft_putnbr(long n);
int	ft_hexadecimal(unsigned long a, char *s);
int	ft_printf(const char *str, ...);
#endif