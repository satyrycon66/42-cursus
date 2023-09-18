/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:16:18 by siroulea          #+#    #+#             */
/*   Updated: 2023/02/17 12:25:49 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	print_x(unsigned int ptr);
int	ft_printptr(unsigned long long ptr);
int	print_hex(unsigned long long ptr);
int	print_majx(unsigned int ptr);
int	ft_strlen(char *str);
int	ft_uputnbr(unsigned int n);
#endif
