/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egums <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 18:07:37 by egums             #+#    #+#             */
/*   Updated: 2020/11/14 18:07:38 by egums            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FUNC_H
#define		FUNC_H

char 			ft_param(const char *c);
int				check_param(char c);
t_param			*default_param_t();
int				check_minus_char(char c, t_param *param);

void			check_minus(const char *c, t_param *param);
void			check_zero(const char *c, t_param *param);
void			check_precision(const char *c, va_list args, t_param *param);
void			check_width(const char *c, va_list args, t_param *param);

char			*ft_itoa_base(unsigned long int nb, unsigned int base);
int				ft_putstr_int(char *s, int fd);
void			string_char_out(va_list args, t_param *param);
void			digits_int_out(va_list args, t_param *param);

//int				ft_int_type




#endif
