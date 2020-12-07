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

#include "testingout.h"

#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>
#include <stdarg.h>

int i = 0;
#define TEST printf("%d", i++);
#define PRINT out_param(param);

int				check_iteration_out(const char *format, va_list args, t_param
*param)
{
	if (*format == '%')
	{
		string_char_out("%", param);
		format++;
		return (0);
	}
	else if (*format == 's')
		take_arg(args, param);
	else if (*format == 'd' || *format == 'i')
	{
		param->type = 'i';
		take_int_args(args, param);
	}
	else if (*format == 'c')
		check_char(args, param);
	else if (*format == 'u')
	{
		param->type = 'u';
		take_int_args(args, param);
	}
	else if (*format == 'x' || *format == 'X')
	{
		param->type = *format;
		take_int_args(args, param);
	}
	else if (*format == 'p')
	{
		param->type = 'p';
		take_int_args(args, param);
	}
	else
		return (1);
	return (0);
}

int				check_iteration_params(const char *format, va_list args,
		t_param *param)
{
	char		*tmp;

	tmp = (char *)format;
	param->type = ft_param(tmp);
	check_minus(format, param);
	check_zero(format, param);
	check_width(format, args, param);
	check_precision(format, args, param);
	while (!check_param(*tmp))
		tmp++;
	param->pointer = tmp;

	return (0);

//		if (*tmp == '0' && check_minus((char *)format))
//		{
//			param->zero = 1;
//			tmp++;
//		}
//		else if (check_minus_char(*tmp, param))
//			tmp++;
//		else if (*tmp == '.')
//		{
//			tmp++;
//			if (*tmp == '*')
//				param->precision = va_arg(args, int);
//			else
//				param->precision = ft_atoi(tmp);
//		}
//	}
}

int				check_format(const char *format, va_list args, t_param *param)
{
	int 		tmp_count;
	while (*format)
	{
		if (*format == '%' && *(format + 1) != '%')
		{

			check_iteration_params(format + 1, args, param);
			if (check_iteration_out(param->pointer, args, param))
				return (1);
			format = param->pointer;

			tmp_count = param->count;
			free(param);
			param = default_param_t();
			param->count = tmp_count;
		}
		else
			if (*format == '%')
			{
				ft_putchar_fd(*format, 1);
				format++;
				param->count++;
			}
			else
			{
				ft_putchar_fd(*format, 1);
				param->count++;
			}
		if (!*format)
			break ;
		format++;


	}
	return (0);
}

int			ft_printf(const char *format, ...)
{
	va_list 		args;
	t_param			*param;
	const char 		*begin;

	begin = format;
	param = default_param_t();
	va_start(args, format);
	check_format(format, args, param);
	va_end(args);

	return (param->count);
}
