/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtreviza <gtreviza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:01:53 by gtreviza          #+#    #+#             */
/*   Updated: 2022/09/09 20:06:43 by gtreviza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int strcmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;

	i = 1;
	while (*s1 && i < n)
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
		i++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
