/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egums <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:23:14 by egums             #+#    #+#             */
/*   Updated: 2020/11/06 19:00:34 by egums            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*word_alloc(const char *str, char c)
{
	char		*ret_word;
	int			index;

	index = 0;
	while (!(c == str[index]) && str[index])
		index++;
	if (!(ret_word = (char *)malloc(1 * (index + 1))))
		return (NULL);
	index = -1;
	while (!(c == str[++index]) && str[index])
		ret_word[index] = str[index];
	ret_word[index] = '\0';
	return (ret_word);
}

static int		count_word(const char *str, char c)
{
	int			count;

	count = 0;
	while (*str)
	{
		if (*str && !(c == *str))
		{
			count++;
			while (*str && !(c == *str))
				str++;
		}
		while (*str && c == *str)
			str++;
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	char		**ret;
	int			index;

	index = 0;
	if (!s || !(ret = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		while (*s && c == *s)
			s++;
		if (*s && !(c == *s))
		{
			if (!(ret[index] = word_alloc(s, c)))
			{
				while (*ret)
				{
					free(*ret);
					ret++;
				}
				return (NULL);
			}
			index++;
			while (*s && !(c == *s))
				s++;
		}
	}
	ret[index] = NULL;
	return (ret);
}
