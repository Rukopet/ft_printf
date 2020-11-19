/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egums <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 15:17:43 by egums             #+#    #+#             */
/*   Updated: 2020/11/13 17:26:29 by egums            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

int i = 0;

#define TEST printf("%d", i++);

t_param			*default_param_t()
{
	t_param		*ret;

	if(!(ret = malloc(sizeof(t_param) * 1)))
		return (NULL);
	ret->width = -1;
	ret->width_flag = 0;

	ret->precision = 1;
	ret->precision_flag = 0;
	return (ret);
}

int				check_iteration(const char *format, va_list args)
{
	char		*var;
	int			count;
	int			int_var;

	count = 0;
	if (*format == 's')
	{
		var = va_arg(args, char*);
		//printf("%s\n\n", var);
		count = ft_putstr_fd(var, 1);
	}
	if (*format == 'c')
	{
		count++;
		ft_putchar_fd(va_arg(args, int), 1);
	}
	if (*format == 'd' || *format == 'i')
	{
		int_var = va_arg(args, int);
		count = ft_putstr_fd(ft_itoa(int_var), 1);
	}
	return (0);
}

int				check_format(const char *format, va_list args)
{
	int			count;

	count = 0;
	while(*format)
	{
		if (*format == '%' && *format + 1 != '%')
		{
			count += check_iteration(format + 1, args);
			format++;
		}
		else
			if (*format == '%')
			{
				ft_putchar_fd(*format, 1);
				format++;
				count++;
			}
			else
			{
				ft_putchar_fd(*format, 1);
				count++;
			}
		if (!*format)
			break ;
		format++;
	}
	return (count);
}

int			ft_printf(const char *format, ...)
{
	va_list 		args;
	t_param			*param;
	const char 		*begin;
	int 			ret;

	ret = 0;
	begin = format;
	param = default_param_t();
	va_start(args, format);
	ret = check_format(format, args);
	va_end(args);
	return (ret);
}