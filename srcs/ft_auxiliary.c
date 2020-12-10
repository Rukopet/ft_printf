/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_auxiliary.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egums <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 10:32:50 by egums             #+#    #+#             */
/*   Updated: 2020/12/07 10:32:52 by egums            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

char		*ft_help_itoa(t_param *param, char *sign, int *check, long int *nb)
{
	char	*ret;

	if (*nb < 0)
	{
		*sign = '-';
		*nb *= -1;
	}
	*check = (param->type == 'p') ? 2 : 0;
	if (param->type == 'X')
		ret = ft_strdup("0123456789ABCDEF");
	else
		ret = ft_strdup("0123456789abcdef");
	return (ret);
}

void		ft_check_format_help(const char **tmp, t_param *param)
{
	if (**tmp == '%')
	{
		ft_putchar_fd(**tmp, 1);
		param->count++;
		(*tmp)++;
	}
	else
	{
		ft_putchar_fd(**tmp, 1);
		param->count++;
	}
}