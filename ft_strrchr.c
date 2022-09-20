/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtreviza <gtreviza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 03:39:23 by gtreviza          #+#    #+#             */
/*   Updated: 2022/09/19 01:09:32 by gtreviza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	c = (char)c;
	i = ft_strlen(s);
	if (!*s && c == '\0')
		return ((char *) s + i);
	while (i >= 0)
	{
		if (s[i] == (unsigned char) c)
			return ((char *) s + i);
		i--;
	}
	return ((char *) NULL);
}
