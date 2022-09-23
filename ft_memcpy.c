/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtreviza <gtreviza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 02:55:25 by gtreviza          #+#    #+#             */
/*   Updated: 2022/09/23 03:06:25 by gtreviza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*new_dest;
	const char	*new_source;

	new_dest = (char *)dest;
	new_source = (char *)src;
	if ((new_dest != NULL) && (new_source != NULL))
	{
		while (n)
		{
			*(new_dest) = *(new_source);
			new_dest++;
			new_source++;
			n--;
		}
	}
	return (dest);
}
