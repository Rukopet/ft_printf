/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digits.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egums <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 07:01:13 by egums             #+#    #+#             */
/*   Updated: 2020/11/25 07:01:16 by egums            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

static void out_int_digits(t_param *param, char *string, char minus)
{
	int 	number;

	if (minus != -1)
	{
		number = ft_putstr_int(string, 1);
		param->count += number;
		param->width -= number;
		param->count += out_spaces(' ', param->width);
	}
//	else
//	{
//
//	}
}

static void no_param_minus(t_param *param, char *string)
{
	int 	len;

	len = ft_strlen(string);
	if (param->zero)
	{
		if (param->sign_int == '-')
		{
			param->count += ft_putstr_int("-", 1);
			param->width--;
		}
		while (len != param->width)
		{
			write (1, "0", 1);
			param->width--;
			param->count++;
		}
		param->count += ft_putstr_int(string, 1);
	}
	else
	{
		len = (param->sign_int == '-') ? len + 1 : len;
		while (len != param->width)
		{
			write (1, " ", 1);
			param->width--;
			param->count++;
		}
		if (param->sign_int == '-')
		{
			param->count += ft_putstr_int("-", 1);
			param->width--;
		}
		param->count += ft_putstr_int(string, 1);
	}

}

void		check_width_len(char *string, t_param *param)
{
	int 	number;

	number = ft_strlen(string);
	number = (param->sign_int == '-') ? number + 1 : number;
	param->width = (param->width < number) ? number : param->width;
}

void		digits_int_out(va_list args, t_param *param)
{
	int 	number;
	char 	*string;

	number = va_arg(args, int);
	string = ft_itoa_base(number, 10, &param->sign_int);
	if (param->width != -1 && param->precision == -1)
	{
		check_width_len(string, param);
		if (param->minus)
		{
			if (param->sign_int == '-')
			{
				param->count += ft_putstr_int("-", 1);
				param->width--;
			}
			out_int_digits(param, string, param->minus);
		}
		else
			no_param_minus(param, string);
	}
	else
		check_param_wd(param, string);
}

//dodelat vse width precision