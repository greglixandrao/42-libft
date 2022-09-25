/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtreviza <gtreviza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 22:49:45 by gtreviza          #+#    #+#             */
/*   Updated: 2022/09/26 01:37:47 by gtreviza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	//size_t	lenght;
	size_t	i;
	char	*dest;
	/*
		lenght = ft_strlen(s);
		if (s == NULL)
			return (NULL);
		if (lenght <= len)
			len = lenght - start;
		if (start > ft_strlen(s))
			return (ft_strdup(""));
		dest = (char *)malloc(sizeof(s) * (len + 1));
		if (!dest)
			return (NULL);
		ft_strlcpy(dest, (char *) s + start, len + 1);
		return (dest);*/
	if (start > ft_strlen(s))
		dest = malloc(1);
	else if (len < ft_strlen(s))
		dest = malloc(len + 1);
	else
		dest = malloc(ft_strlen(s) - start + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	if (start <= ft_strlen(s))
	{
		while (s[start] && i < len)
		{
			dest[i] = s[start];
			i++;
			start++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
