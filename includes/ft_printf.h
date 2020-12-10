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
	char 			precision_minus;

	int				width;
	char			width_minus;

	char 			minus;
	char 			zero;
	char 			type;
	char 			sign_int;
	char 			flag_null;
	const char 		*pointer;

	int				count;

}					t_param;
	/*
	**Meaning of  width flags
	**(0) - no check
	**(1) - width have minus
	**(2) - checked like normal value
	**(3) - width have 0 value
	**
	**Meaning if precision flags
	**(0) - dont have precision in format
	**(1) - precision have minus
	**(2) - precision check and its checked like normal
	**(3) - precision have 0 value
	*/

int				ft_printf(const char *format, ...);
int				check_iteration_out(const char *format, va_list args,
		t_param *param);
int				check_iteration_params(const char *format, va_list ,
		t_param *param);
int				check_format(const char *format, va_list args, t_param
*param);
int				ft_putstr_int(char *s, int fd);
int				ft_putstr_chars(char *s, int fd, t_param *param);

char 			ft_param(const char *c);
int				check_param(char c);
t_param			*default_param_t(t_param *param);
int				check_minus_char(char c, t_param *param);

void			check_minus(const char *c, t_param *param);
void			check_zero(const char *c, t_param *param);
void			check_precision(const char *c, va_list args, t_param *param);
void			check_width(const char *c, va_list args, t_param *param);

char			*ft_itoa_base(long int nb, int base, char *sign,
					 t_param *param);
int				ft_putstr_int(char *s, int fd);

void			string_char_out(char *string,t_param *param);
void 			take_arg(va_list args, t_param *param);
void			check_char(va_list args, t_param *param);
void 			ft_precision_zero(t_param *param);

void			digits_int_out(long int digit, t_param *param);
void 			out_int_digits(t_param *param, char *string, char minus);
void			no_param_minus(t_param *param, char *string);
void 			take_int_args(va_list args,t_param *param);
int				out_spaces(char sym, int len);
void			out_pointers(char *string, t_param *param);

void			check_width_len(char *string, t_param *param);
void			check_param_wd(t_param *param, char *string);
int 			ft_strlen_char(char *s, t_param *param);
void 			check_pointer(char **string, t_param *param);

char			*ft_help_itoa(t_param *param, char *sign, int *check, long int *nb);

#endif