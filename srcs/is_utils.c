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

#include "ft_printf.h"
#include <stdarg.h>
#include <stdlib.h>

t_param			*default_param_t()
{
	t_param		*ret;

	if(!(ret = malloc(sizeof(t_param))))
		return (NULL);
	ret->width = -1;
	ret->width_flag = 0;

	ret->precision = 1;
	ret->precision_flag = 0;
	ret->minus = 0;
	ret->zero = 0;
	ret->type = 0;
	ret->pointer = NULL;
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

int				check_minus(char *c)
{
	while (*c != '%' && *c && !check_param(*c))
	{
		if (*c == '-')
			return (1);
		c++;
	}
	return (0);
}

char 			ft_param(char *c)
{
	
	while (*c != '%' && *c)
	{
		if (check_param(*c))
			return (*c);
		c++;
	}
	return (0);
}