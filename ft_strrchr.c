/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtreviza <gtreviza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 03:39:23 by gtreviza          #+#    #+#             */
/*   Updated: 2022/09/14 21:42:50 by gtreviza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

char	*ft_strrchr(const char *s, int c)
{
	int last_element;

	last_element = ft_strlen(s);
	if (!*s || c < -128 || c > 127)
		return ((char *) s);
	while (*(s + last_element) != c)
		s--;
	if (*s == c)
		return ((char *) s);
	else
		return ((char *) NULL);
}
