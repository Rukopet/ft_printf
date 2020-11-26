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

	char 			minus;
	char 			zero;
	char 			type;
	char 			sign_int;
	const char 		*pointer;

	int				count;

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

int				ft_printf(const char *format, ...);
int				check_iteration_out(const char *format, va_list args,
		t_param *param);
int				check_iteration_params(const char *format, va_list ,
		t_param *param);
int				check_format(const char *format, va_list args, t_param *param);
int				ft_putstr_int(char *s, int fd);

char 			ft_param(const char *c);
int				check_param(char c);
t_param			*default_param_t();
int				check_minus_char(char c, t_param *param);

void			check_minus(const char *c, t_param *param);
void			check_zero(const char *c, t_param *param);
void			check_precision(const char *c, va_list args, t_param *param);
void			check_width(const char *c, va_list args, t_param *param);

char			*ft_itoa_base(long int nb, int base, char *sign);
int				ft_putstr_int(char *s, int fd);
void			string_char_out(va_list args, t_param *param);
void			digits_int_out(va_list args, t_param *param);
int				out_spaces(char sym, int len);

void			check_width_len(char *string, t_param *param);
void			check_param_wd(t_param *param, char *string);





void out_param(t_param *param);

#endif