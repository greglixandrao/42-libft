/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtreviza <gtreviza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 03:11:17 by gtreviza          #+#    #+#             */
/*   Updated: 2022/09/18 22:53:15 by gtreviza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	c = (char) c;
	while (*s != c && *s)
		s++;
	if (*s == c)
		return ((char *) s);
	else
		return ((char *) NULL);
	if (!*s)
		return ((char *) s);
}
