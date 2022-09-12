/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtreviza <gtreviza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 00:54:27 by gtreviza          #+#    #+#             */
/*   Updated: 2022/09/12 01:48:38 by gtreviza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *restrict dst, const char *src, size_t size)
{
	size_t	count;
	size_t	src_size;
	size_t	dst_size;
	size_t	src_index;

	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	count = dst_size;
	src_index = 0;
	while ((*(src + src_index) != '\0'))
	{
		*(dst + count) = *(src + src_index);
		count++;
		src_index++;
		if (count == size - 1)
			break ;
	}
	if (size == 1 || *src == 0)
		*(dst + count) = '\0';
	return (dst_size + src_size);
}
