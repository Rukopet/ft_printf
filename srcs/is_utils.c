/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egums <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 16:59:20 by egums             #+#    #+#             */
/*   Updated: 2020/11/14 16:59:22 by egums            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testingout.h"

#include "ft_printf.h"
#include <stdarg.h>
#include <stdlib.h>

#define PRINT out_param(ret);

t_param			*default_param_t()
{
	t_param		*ret;

	if(!(ret = malloc(sizeof(t_param))))
		return (NULL);
	ret->width = -1;
	ret->precision = -1;
	ret->minus = 0;
	ret->zero = 0;
	ret->type = 0;
	ret->pointer = NULL;
	ret->count = 0;
	return (ret);
}

int				check_param(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' ||
		c == 'u' || c == 'x' || c == 'X')
		return (1);
	else
		return (0);
}

void			check_minus(const char *c, t_param *param)
{
	while (*c != '%' && *c && !check_param(*c))
	{
		if (*c == '-')
			param->minus = 1;
		c++;
	}
}

int				check_minus_char(char c, t_param *param)
{
	if (c == '-')
	{
		param->minus = 1;
		return (1);
	}
	return (0);
}

char 			ft_param(const char *c)
{
	
	while (*c != '%' && *c)
	{
		if (check_param(*c))
			return (*c);
		c++;
	}
	return (0);
}