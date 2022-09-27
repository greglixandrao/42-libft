/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtreviza <gtreviza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 22:49:45 by gtreviza          #+#    #+#             */
/*   Updated: 2022/09/27 03:17:25 by gtreviza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	else if (len < ft_strlen(s))
		dest = (char *)malloc(len + 1);
	else
		dest = (char *)malloc(ft_strlen(s) - start + 1);
	if (dest == NULL)
		return (NULL);
	if (start <= ft_strlen(s))
		ft_strlcpy(dest, (char *)(s + start), len + 1);
	return (dest);
}
