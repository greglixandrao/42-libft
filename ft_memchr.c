/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtreviza <gtreviza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 23:06:27 by gtreviza          #+#    #+#             */
/*   Updated: 2022/09/24 00:08:25 by gtreviza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	c = (char)c;
	while (n - 1 > 0)
	{
		if (*str == c)
			return ((char *)str);
		str++;
		n--;
	}
	if (*str == c)
		return ((char *)str);
	return (NULL);
}
