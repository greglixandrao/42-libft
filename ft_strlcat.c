/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtreviza <gtreviza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 00:54:27 by gtreviza          #+#    #+#             */
/*   Updated: 2022/09/14 02:16:39 by gtreviza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_size;
	size_t	dst_size;
	size_t	src_index;

	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	src_index = 0;
	if (size <= dst_size)
		return (size + src_size);
	while ((*(src + src_index) != '\0') && (dst_size + src_index) < size - 1)
	{
		*(dst + dst_size + src_index) = *(src + src_index);
		src_index++;
	}
	*(dst + dst_size + src_index) = '\0';
	return (dst_size + src_size);
}
