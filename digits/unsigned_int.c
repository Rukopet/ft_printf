/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egums <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 21:05:50 by egums             #+#    #+#             */
/*   Updated: 2020/11/29 21:05:51 by egums            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void 		ft_hex(unsigned int number, t_param *param)
{
	if (number == 0 && param->type == 0)
		return ;
}

void 		take_int_args(va_list args,t_param *param)
{
	int				number;
	unsigned int	number1;

	number = 0;
	number1 = 0;
	if (param->type == 'u' || param->type == 'X' || param->type == 'x')
	{
		param->minus = 0;
		number1 = va_arg(args, unsigned int);
		if (param->type == 'X' || param->type == 'x')
			ft_hex(number1, param);
		else
			digits_int_out(number1, param);
		return ;
	}
	if (param->type == 'i')
	{
		number = va_arg(args, int);
		digits_int_out(number, param);
		return ;
	}
}
