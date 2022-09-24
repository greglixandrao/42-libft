/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtreviza <gtreviza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 20:03:40 by gtreviza          #+#    #+#             */
/*   Updated: 2022/09/24 20:07:11 by gtreviza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb > 2147483647 || size > 2147483647 || size * nmemb > 2147483647)
		return (NULL);
	str = malloc(nmemb * size);
	ft_bzero(str, nmemb * size);
	return (str);
}
