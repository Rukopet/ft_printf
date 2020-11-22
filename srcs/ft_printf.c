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
#include "func.h"
#include "out.h"
#include <stdio.h>
#include <stdarg.h>

int i = 0;
#define TEST printf("%d", i++);

int				check_iteration_out(const char *format, va_list args, t_param
*param)
{
	char		*var;
	int			count;
	int			int_var;

	count = 0;
	if (*format == 's')
	{
		var = va_arg(args, char*);
		//printf("%s\n\n", var);
		count = ft_putstr_int(var, 1);
	}
	if (*format == 'c')
	{
		count++;
		ft_putchar_fd(va_arg(args, int), 1);
	}
	if (*format == 'd' || *format == 'i')
	{
		int_var = va_arg(args, int);
		count = ft_putstr_int(ft_itoa(int_var), 1);
	}
	return (0);
}

int				check_iteration_params(const char *format, va_list args,
		t_param *param)
{
	char		*tmp;
	char		type;
	short		flag_w;

	tmp = (char *)format;
	type = ft_param(tmp);
	flag_w = 0;
	while (!check_param(*tmp))
	{
		if (*tmp == '0' && check_minus((char *)format))
		{
			param->zero = 1;
			tmp++;
		}
		else if (*tmp == '-')
		{
			param->minus = 1;
			tmp++;
		}
		else if (*tmp == '.')
		{
			tmp++;
			if (*tmp == '*')
				param->precision = va_arg(args, int);
			else
				param->precision = ft_atoi(tmp);
		}
	}
	param->pointer = tmp;
	return (0);
}

int				check_format(const char *format, va_list args, t_param *param)
{
	int			count;

	count = 0;
	while(*format)
	{
		if (*format == '%' && *format + 1 != '%')
		{
			check_iteration_params(format + 1, args, param);
			count += check_iteration_out(param->pointer, args, param);
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
	ret = check_format(format, args, param);
	va_end(args);
	return (ret);
}
