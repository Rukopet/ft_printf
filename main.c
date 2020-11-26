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
	int b;
	//char b;
	//a = 123456789;

	//printf ("1% +d", a);
	//ft_printf ("%s\n%s", "123", "456"); //digits
//	ft_printf ("%c\n%c   %c0\n", 65, 66, 67); //chars
//	ft_printf("[%*.*s]\n", 24, 5,"0123456789");
//
//	printf ("\n*\n*\n");

//	printf("[%24.5s]\n", "0123456789");
//	ft_printf("[%24.5s]\n", "0123456789");
//
//	printf("[%24s]\n", "0123456789");
//	ft_printf("[%24s]\n", "0123456789");
//
//	printf("[%.5s]\n", "0123456789");
//	ft_printf("[%.5s]\n", "0123456789");

//	printf("[%.5s]\n", "0123456789");
//	ft_printf("[%.5s]\n", "0123456789");

//	printf("[%020.15d]\n", 123456789);
//	ft_printf("[%020.15d]\n", 123456789);
//
//	printf("[%020.15d]\n", -123456789);
//	ft_printf("[%020.15d]\n", -123456789);
//
//	printf("[%020d]\n", -123456789);
//	ft_printf("[%020d]\n", -123456789);
//
//	printf("[%-20d]\n", -123456789);
//	ft_printf("[%-20d]\n", -123456789);
	a = printf("[%-15d]\n", -123456789);
	b = ft_printf("[%-15d]\n", -123456789);
	printf ("orig = %d\n  my = %d\n\n", a, b);

	a = printf("[%015d]\n", -123456789);
	b = ft_printf("[%015d]\n", -123456789);
	printf ("orig = %d\n  my = %d\n\n", a, b);

	a = printf("[%015d]\n", 123456789);
	b = ft_printf("[%015d]\n", 123456789);
	printf ("orig = %d\n  my = %d\n\n", a, b);

	a = printf("[%15d]\n", -123456789);
	b = ft_printf("[%15d]\n", -123456789);
	printf ("orig = %d\n  my = %d\n\n", a, b);

	a = printf("[%015.4d]\n", -123456789);
	b = ft_printf("[%15d]\n", -123456789);
	printf ("orig = %d\n  my = %d\n\n", a, b);

	a = printf ("[%20.15d]\n", -123456789);
	b = ft_printf ("[%20.15d]\n", -123456789);
	printf ("orig = %d\n  my = %d\n\n", a, b);

	a = printf ("[%-20.15d]\n", -123456789);
	b = ft_printf ("[%-20.15d]\n", -123456789);
	printf ("orig = %d\n  my = %d\n\n", a, b);

	a = printf ("[%.15d]\n", -123456789);
	b = ft_printf ("[%.15d]\n", -123456789);
	printf ("orig = %d\n  my = %d\n\n", a, b);

	a = printf ("[%d]\n", -123456789);
	b = ft_printf ("[%d]\n", -123456789);
	printf ("orig = %d\n  my = %d\n\n", a, b);

//	a = printf ("[%.15d]\n", -123456789);
//	b = ft_printf ("[%.15d]\n", -123456789);
//	printf ("orig = %d\n  my = %d\n\n", a, b);
//	printf("[%*.*s]\n", 24, 5,"0123456789");
//	printf ("%c\n%c   %c0\n", 65, 66, 67);
	//printf ("check = %i", check);
	return 0;
}

void out_param(t_param *param)
{
	printf ("\n precision - %i", param->precision);
	printf ("\n width - %i", param->width);
//	printf ("\n width_flag - %i", param->width_flag);
//	printf ("\n precision_flag - %i", param->precision_flag);
	printf ("\n char minus - %i", param->minus);
	printf ("\n char type - %i", param->type);
	printf ("\n char zero - %i", param->zero);
	printf ("\n int count - %i", param->count);

//int				precision;
//int				width;
//int				width_flag;
//int				precision_flag;
//char 			minus;
//char 			zero;
//char 			type;
//const char 		*pointer;
}
