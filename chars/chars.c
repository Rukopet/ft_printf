/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chars.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egums <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 19:19:40 by egums             #+#    #+#             */
/*   Updated: 2020/11/27 19:19:42 by egums            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

//static void out_with_space(char c, t_param *param)
//{
//	if (param->minus == -1)
//	{
//		while (param->width != 1)
//		{
//			param->count += ft_putstr_int(" ", 1);
//			param->width--;
//		}
//		param->count += write(1, &c, 1);
//	}
//	else if (param->minus != -1)
//	{
//		while (param->width != )
//	}
//}

void 		check_char(va_list args, t_param *param)
{
	char	tmp;
	char	b[2];

	tmp = va_arg(args, int);
	b[0] = tmp;
	b[1] = '\0';
	param->precision = 1;
//	param->zero = 0;
	string_char_out(&tmp, param);
}
