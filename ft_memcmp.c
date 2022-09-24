/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtreviza <gtreviza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:16:21 by gtreviza          #+#    #+#             */
/*   Updated: 2022/09/24 18:22:35 by gtreviza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] && i < n)
		i++;
	if (i == n)
		return (((unsigned char *)s1)[i - 1] - ((unsigned char *)s2)[i - 1]);
	else
		return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
