/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egums <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 18:20:35 by egums             #+#    #+#             */
/*   Updated: 2020/11/15 18:21:06 by egums            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef				FT_PRINTF_H
# define			FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>

typedef struct		s_param
{
	int				precision;
	int				width;
	int				width_flag;
	int				precision_flag;
	char 			minus;
	char 			zero;
	char 			type;
	const char 		*pointer;
}					t_param;

	/*
	**Meaning of  width flags
	**(0) - No check
	**(1) - Width spec turned like int arg with '*' spec
	**(2) - Width spec turned like int value int *format
	**(3) - Width have '0' param
	**(4) - Width have have '-' param
	**
	**Meaning if precision flags
	**(0) - No check
	**(1) - Precision spec turned like int arg with '*' spec
	**(2) - Precision spec turned link int value in *format
	**default precision is 1
	*/

int			ft_printf(const char *format, ...);
int			check_iteration_out(const char *format, va_list args,
		t_param *param);
int			check_iteration_params(const char *format, va_list , t_param
*param);
int			check_format(const char *format, va_list args, t_param *param);

#endif