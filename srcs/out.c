/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   out.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egums <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 18:14:04 by egums             #+#    #+#             */
/*   Updated: 2020/11/22 18:14:58 by egums            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putstr_int(char *s, int fd)
{
	int count;

	count = 0;
	if (!s)
		return (count);
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
		count++;
	}
	return (count);
}

static int	ft_itoa_base_count(unsigned long int nb, unsigned int base)
{
	int 	i;

	if (nb == 0)
		return (1);
	i = 0;
	while (nb)
	{
		nb = nb / base;
		i++;
	}
	return (i);
}

char		*ft_itoa_base(unsigned long int nb, unsigned int base)
{
	char	*ret;
	char	*numbers;
	int		i;

	numbers = ft_strdup("0123456789abcdef");
	ret = NULL;
	i = ft_itoa_base_count(nb, base);
	if (!(ret = (char*)malloc(sizeof(char) * i + 1)))
		return (NULL);
	ret[i--] = '\0';
	while (i >= 0)
	{
		ret[i--] = numbers[nb % base];
		nb = nb / base;
	}
	free(numbers);
	return (ret);
}