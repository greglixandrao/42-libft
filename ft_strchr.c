/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtreviza <gtreviza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 03:11:17 by gtreviza          #+#    #+#             */
/*   Updated: 2022/09/14 03:46:39 by gtreviza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	if (!*s || c < -128 || c > 127)
		return ((char *) s);
	while (*s != c && *s != '\0')
		s++;
	if (*s == c)
		return ((char *) s);
	else
		return ((char *) NULL);
}
