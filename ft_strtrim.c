/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtreviza <gtreviza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 04:28:30 by gtreviza          #+#    #+#             */
/*   Updated: 2022/10/01 23:12:56 by gtreviza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strtrim_beg(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	i = 0;
	k = 0;
	while (s1[k])
	{
		j = i;
		l = 0;
		while (set[l])
		{
			if (s1[k] == set[l])
				i++;
			l++;
		}
		if (j == i)
			break ;
		k++;
	}
	return (i);
}

static size_t	ft_strtrim_end(char const *s1, char const *set, size_t m)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	i = m;
	if (i != ft_strlen(s1))
	{
		k = ft_strlen(s1) - 1;
		while (k > 0)
		{
			j = i;
			l = 0;
			while (set[l])
			{
				if (s1[k] == set[l])
					i++;
				l++;
			}
			if (j == i)
				break ;
			k--;
		}
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	m;
	size_t	n;
	char	*str;

	m = ft_strtrim_beg(s1, set);
	n = ft_strtrim_end(s1, set, m);
	str = ft_substr(s1, m, ft_strlen(s1) - n);
	if (str == NULL)
		return (NULL);
	return (str);
}
