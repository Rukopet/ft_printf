/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egums <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 23:34:14 by egums             #+#    #+#             */
/*   Updated: 2020/11/24 23:34:50 by egums            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testingout.h"

#include "ft_printf.h"
#include "libft.h"
#include "func.h"
#define PRINT out_param(param);
#include <stdio.h>

void			check_zero(const char *c, t_param *param)
{
	short		i;

	i = 0;
	while (*c != '%' && *c && !check_param(*c) && i != 2)
	{
		if (ft_isdigit(*c) && *c != '0')
			return ;
		if (*c == '0' && param->minus != 1)
			param->zero = 1;
		c++;
		i++;
	}
}

void			check_precision(const char *c, va_list args, t_param *param)
{
	while (*c != '%' && *c && !check_param(*c))
	{
		if (c[0] == '0' || c[0] == '-')
			c++;
		if (*c == '.')
		{
			param->precision = 0;
			param->precision_minus = 2;
			if (*(c + 1) == '*')
			{
				param->precision = va_arg(args,	int);
			}

			if (ft_isdigit(*(c + 1)))
				param->precision = ft_atoi(c + 1);
			break ;
		}
		c++;
	}
	param->precision_minus = (param->precision < 0) ? 1 : 0;
	if (param->precision == 0)
		param->precision_minus = 3;
	param->precision = (param->precision < 0) ? 0 :	param->precision;
}

void			check_width(const char *c, va_list args, t_param *param)
{
	while (*c != '%' && *c && !check_param(*c) && *c != '.')
	{
		if (c[0] == '0' || c[0] == '-')
			c++;
		if (*c == '*')
		{
			param->width = va_arg(args,	int);
			param->minus = (param->width < 0) ? 1 : param->minus;
//			param->width_minus = (param->width < 0) ? 1 : 0;
			param->width = (param->width < 0) ?
					param->width * -1 : param->width;

		}
		if (ft_isdigit(*c) && *c != 0)
		{
			param->width = ft_atoi(c);
			break ;
		}
		c++;
	}
}

