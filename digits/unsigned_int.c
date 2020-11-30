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

void 		take_int_args(va_list args,t_param *param)
{
	int				number;
	unsigned int	number1;
	long int 		number2;

	number = 0;
	number1 = 0;
	if (param->type == 'u' || param->type == 'X' || param->type == 'x' ||
	param->type == 'p')
	{
		param->sign_int = '0';
		if (param->type == 'p')
		{
			number2 = va_arg(args, long);
			digits_int_out(number2, param);
		}
		else
		{
			number1 = va_arg(args, unsigned int);
			digits_int_out(number1, param);
		}
		return ;
	}
	if (param->type == 'i')
	{
		number = va_arg(args, int);
		digits_int_out(number, param);
		return ;
	}
}
