/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtreviza <gtreviza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 23:20:25 by gtreviza          #+#    #+#             */
/*   Updated: 2022/09/12 00:43:36 by gtreviza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	count;

	count = 0;
	if (size > 0)
	{
		while ((*(src + count) != '\0') && (count < (size - 1)))
		{
			if (count == size)
			{
				count--;
				break ;
			}
			*(dst + count) = *(src + count);
			count++;
		}
	}
	if (size != 0)
		*(dst + count) = '\0';
	while (*(src + count) != '\0')
		count++;
	return (count);
}
