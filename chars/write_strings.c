/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_strings.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egums <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 03:40:11 by egums             #+#    #+#             */
/*   Updated: 2020/11/25 03:40:16 by egums            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int			out_with_precision(char *c, int len)
{
	int		count;

	count = 0;
	while (*c && len)
	{
		ft_putchar_fd(*c, 1);
		c++;
		len--;
		count++;
	}
	return (count);
}

int			out_spaces(char sym, int len)
{
	int		count;

	count = 0;
	while (len)
	{
		write (1, &sym, 1);
		len--;
		count++;
	}
	return (count);
}

void		string_no_width(char *tmp, t_param *param, char tmp_sym)
{
	int		len;

	len = ft_strlen(tmp);
	if (param->width == 0 && param->precision != 0)
		param->count += out_with_precision(tmp, param->precision);
	if (param->width == 0 && param->precision == 0)
		param->count += ft_putstr_int(tmp, 1);
	if (param->width && param->precision == 0 &&  param->precision_minus != 3)
	{

		param->width = (param->width < len) ? len : param->width;
		if (param->minus)
		{
			param->count += out_with_precision(tmp, param->width);
			param->width = param->width - len;
			param->count += out_spaces(tmp_sym, param->width);
		}
		else
		{
			param->width = param->width - len;
			param->count += out_spaces(tmp_sym, param->width);
			param->count += out_with_precision(tmp, param->width);
		}
	}
}

void		string_char_out(char *string, t_param *param)
{
	char 	tmp_sym;

	tmp_sym = (param->zero == 1) ? '0' : ' ';
	if (param->width != 0 && param->precision != 0)
	{


		if (param->minus)
		{
			param->count += out_with_precision(string, param->precision);
			param->width = (param->width >= param->precision) ?
					param->width - param->precision : 0;
			param->count += out_spaces(tmp_sym, param->width);
		}
		else
		{
			param->width = (param->width >= param->precision) ?
					param->width - param->precision : 0;
			param->count += out_spaces(tmp_sym, param->width);
			param->count += out_with_precision(string, param->precision);
		}
	}
	else
		string_no_width(string, param, tmp_sym);
}

void 		take_arg(va_list args, t_param *param)
{
	char 	*tmp;

	tmp = va_arg(args, char *);
//	printf ("pre %d wid %d min %d", param->precision, param->width,
//		 param->minus);
	if (tmp == NULL)
	{
		param->count += ft_putstr_int("(null)", 1);
		return ;
	}
	string_char_out(tmp, param);
}