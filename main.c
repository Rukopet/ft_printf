/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egums <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 19:22:40 by egums             #+#    #+#             */
/*   Updated: 2020/11/12 20:17:59 by egums            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int main()
{
	int a;
	int b = 0;
//	a = printf("[%24.5s]\n", "0123456789");
//	b = ft_printf("[%24.5s]\n", "0123456789");
//	printf ("orig = %d\n  my = %d\n\n", a, b);
//
//	a = printf("[%24s]\n", "0123456789");
//	b = ft_printf("[%24s]\n", "0123456789");
//	printf ("orig = %d\n  my = %d\n\n", a, b);
//
//	a = printf("[%.5s]\n", "0123456789");
//	b = ft_printf("[%.5s]\n", "0123456789");
//	printf ("orig = %d\n  my = %d\n\n", a, b);
//
//	a = printf("[%-15d]\n", -123456789);
//	b = ft_printf("[%-15d]\n", -123456789);
//	printf ("orig = %d\n  my = %d\n\n", a, b);
//
//	a = printf("[%015d]\n", -123456789);
//	b = ft_printf("[%015d]\n", -123456789);
//	printf ("orig = %d\n  my = %d\n\n", a, b);
//
//	a = printf("[%015d]\n", 123456789);
//	b = ft_printf("[%015d]\n", 123456789);
//	printf ("orig = %d\n  my = %d\n\n", a, b);
//
//	a = printf("[%15d]\n", -123456789);
//	b = ft_printf("[%15d]\n", -123456789);
//	printf ("orig = %d\n  my = %d\n\n", a, b);
//
//	a = printf("[%015.4d]\n", -123456789);
//	b = ft_printf("[%15d]\n", -123456789);
//	printf ("orig = %d\n  my = %d\n\n", a, b);
//
//	a = printf ("[%20.15d]\n", -123456789);
//	b = ft_printf ("[%20.15d]\n", -123456789);
//	printf ("orig = %d\n  my = %d\n\n", a, b);
//
//	a = printf ("[%-20.15d]\n", -123456789);
//	b = ft_printf ("[%-20.15d]\n", -123456789);
//	printf ("orig = %d\n  my = %d\n\n", a, b);
//
//	a = printf ("[%-20.*d]\n", -15, -100);
//	b = ft_printf ("[%-20.*d]\n", -15, -100);
//	printf ("orig = %d\n  my = %d\n\n", a, b);
//
//	a = printf ("[%-20.*d]\n", 15, -101);
//	b = ft_printf ("[%-20.*d]\n", 15, -101);
//	printf ("orig = %d\n  my = %d\n\n", a, b);
//
//	a = printf ("[%*.*d]\n", 21, -12, -123456789);
//	b = ft_printf ("[%*.*d]\n", 21, -12, -123456789);
//	printf ("orig = %d\n  my = %d\n\n", a, b);
//
//	a = printf ("[%d]\n", -123456789);
//	b = ft_printf ("[%d]\n", -123456789);
//	printf ("orig = %d\n  my = %d\n\n", a, b);
//
//	a = printf ("[%-10c]\n", 'F');
//	b = ft_printf ("[%-10c]\n", 'F');
//	printf ("orig = %d\n  my = %d\n\n", a, b);

//	a = printf ("[%.*s]\n", -3, "hello");
//	b = ft_printf ("[%-*.*s]\n", -7, -3, "hello");
//	printf ("orig = %d\n  my = %d\n\n", a, b);
//
//	a = printf ("[%-*.*s]\n", -7, -3, "yolo");
//	b = ft_printf ("[%-*.*s]\n", -7, -3, "yolo");
//	printf ("orig = %d\n  my = %d\n\n", a, b);
//
//	a = printf ("[%*.*s]\n",7, 3, "hello");
//	b = ft_printf ("[%*.*s]\n", 7, 3, "hello");
//	printf ("orig = %d\n  my = %d\n\n", a, b);





//
//	a = printf ("[%1p]\n", "hello");
//	b = ft_printf ("[%1p]\n", "hello");
//	printf ("orig = %d\n  my = %d\n\n", a, b);
//
//	a = printf ("[%7p]\n", "nice");
//	b = ft_printf ("[%7p]\n", "nice");
//	printf ("orig = %d\n  my = %d\n\n", a, b);
//
//	a = printf ("[%20p]\n", "nice");
//	b = ft_printf ("[%20p]\n", "nice");
//	printf ("orig = %d\n  my = %d\n\n", a, b);
//
//	a = printf ("[%-20p]\n", "nice");
//	b = ft_printf ("[%-20p]\n", "nice");
//	printf ("orig = %d\n  my = %d\n\n", a, b);
//
//	a = printf ("[%*p]\n", -7,"nice");
//	b = ft_printf ("[%*p]\n", -7,"nice");
//	printf ("orig = %d\n  my = %d\n\n", a, b);
//
//	a = printf ("[%.p]\n", "hello");
//	b = ft_printf ("[%.p]\n", "hello");
//	printf ("orig = %d\n  my = %d\n\n", a, b);



	a = printf ("[%-12.5x]\n", -123456789);
	b = ft_printf ("[%-12.5x]\n", -123456789);
	printf ("orig = %d\n  my = %d\n\n", a, b);

	a = printf ("[%-12.0X]\n", 123456789);
	b = ft_printf ("[%-12.0X]\n", 123456789);
	printf ("orig = %d\n  my = %d\n\n", a, b);

	a = printf ("[%*x]\n", -12, 123456789);
	b = ft_printf ("[%*x]\n", -12, 123456789);
	printf ("orig = %d\n  my = %d\n\n", a, b);

	a = printf ("[%-12.5X]\n", -123456789);
	b = ft_printf ("[%-12.5X]\n", -123456789);
	printf ("orig = %d\n  my = %d\n\n", a, b);

	a = printf ("[%12.5x]\n", 123456789);
	b = ft_printf ("[%12.5x]\n", 123456789);
	printf ("orig = %d\n  my = %d\n\n", a, b);

	a = printf ("[%*X]\n", -12, 123456789);
	b = ft_printf ("[%*X]\n", -12, 123456789);
	printf ("orig = %d\n  my = %d\n\n", a, b);

	a = printf ("[%*.X]\n", -12, 123456789);
	b = ft_printf ("[%*.X]\n", -12, 123456789);
	printf ("orig = %d\n  my = %d\n\n", a, b);

	a = printf ("[%.X]\n", 123456789);
	b = ft_printf ("[%.X]\n", 123456789);
	printf ("orig = %d\n  my = %d\n\n", a, b);

	a = printf ("[%.p]\n", "123456789");
	b = ft_printf ("[%.p]\n", "123456789");
	printf ("orig = %d\n  my = %d\n\n", a, b);

	a = printf ("[%-20.p]\n", "123456789");
	b = ft_printf ("[%-20.p]\n", "123456789");
	printf ("orig = %d\n  my = %d\n\n", a, b);

	a = printf ("[%-12p]\n", "123456789");
	b = ft_printf ("[%-12p]\n", "123456789");
	printf ("orig = %d\n  my = %d\n\n", a, b);

	a = printf ("[%5c]\n", 0);
	b = ft_printf ("[%5c]\n", 0);
	printf ("orig = %d\n  my = %d\n\n", a, b);
//	a = printf ("[%.*s]\n", 0, "hello");
//	b = ft_printf ("[%.*s]\n", 0, "hello");
//	printf ("orig = %d\n  my = %d\n\n", a, b);
//
//	a = printf ("[%7.*s]\n", 0, "hello");
//	b = ft_printf ("[%7.*s]\n", 0, "hello");
//	printf ("orig = %d\n  my = %d\n\n", a, b);
//
//
//	a = printf ("[%*s]\n", -3, "hello");
//	b = ft_printf ("[%*s]\n", -3, "hello");
//	printf ("orig = %d\n  my = %d\n\n", a, b);

	return 0;
}

void out_param(t_param *param)
{
	printf ("\n precision - %i", param->precision);
	printf ("\n width - %i", param->width);
	printf ("\n width_minus - %i", param->width_minus);
	printf ("\n precision_minus - %i", param->precision_minus);
	printf ("\n char minus - %i", param->minus);
	printf ("\n char type - %i", param->type);
	printf ("\n char zero - %i", param->zero);
	printf ("\n int count - %i", param->count);
	printf ("\n char type - %i", param->count);
//int				precision;
//int				width;
//int				width_flag;
//int				precision_flag;
//char 			minus;
//char 			zero;
//char 			type;
//const char 		*pointer;
}
