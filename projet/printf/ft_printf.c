/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:11:35 by siroulea          #+#    #+#             */
/*   Updated: 2023/02/21 11:49:12 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_conversion(va_list args, const char *format, int *ret)
{
	if (*format == 'c')
		*ret += ft_putchar(va_arg(args, int));
	else if (*format == 's')
		*ret += ft_putstr(va_arg(args, char *));
	else if (*format == 'd' || *format == 'i')
		*ret += ft_putnbr(va_arg(args, int));
	else if (*format == '%')
		*ret += ft_putchar('%');
	else if (*format == 'p')
		*ret += ft_printptr(va_arg(args, unsigned long long));
	else if (*format == 'x')
		*ret += print_x(va_arg(args, unsigned int));
	else if (*format == 'X')
		*ret += print_majx(va_arg(args, unsigned int));
	else if (*format == 'u')
		*ret += ft_uputnbr(va_arg(args, unsigned int));
	else
		return (-1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		ret;

	ret = 0;
	va_start(args, format);
	if (!format)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			handle_conversion(args, format, &ret);
		}
		else
			ret += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (ret);
}
