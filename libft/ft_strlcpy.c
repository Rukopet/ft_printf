/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egums <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:11:19 by egums             #+#    #+#             */
/*   Updated: 2020/11/01 18:31:49 by egums            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char*	tmpsrc;
	size_t		tmp;

	tmp = dstsize;
	tmpsrc = src;
//	*dst = (dstsize == 0) ? '\0' : *src;
	if (dstsize != 0)
	{
		while (--dstsize != 0)
			if ((*++dst = *++src) == '\0')
				break;
		*dst = '\0';
	}
	return (ft_strlen(src));
}
