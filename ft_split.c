/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtreviza <gtreviza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2022/09/29 04:18:40 by gtreviza          #+#    #+#             */
/*   Updated: 2022/10/12 20:40:19 by gtreviza         ###   ########.fr       */
=======
/*   Created: 2022/10/14 02:00:48 by gtreviza          #+#    #+#             */
/*   Updated: 2022/10/14 02:00:53 by gtreviza         ###   ########.fr       */
>>>>>>> 251339c41fed32bf24fef1bf2fe4aa56e4e721a2
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **str, unsigned int l)
{
	unsigned int	i;

	if (str[l] == NULL)
	{
		i = 0;
		while (i < l)
		{
			free(str[i]);
			i++;
		}
		free(str);
		return (NULL);
	}
	else
		return (str);
}

static unsigned int	get_num_ptr(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	size_t			length;

	length = ft_strlen(s);
	i = 0;
	j = 0;
	while (s != NULL && s[j])
	{
		if (s[j] == c)
		{
			while (s[j] == c)
				j++;
			i++;
		}
		else
			j++;
	}
	if (s[0] == c && s[length - 1] == c)
		i--;
	if (s[0] != c && s[length - 1] != c)
		i++;
	return (i);
}

static char	**get_ptr(char const *s, char c, char **str)
{
	unsigned int	j;
	unsigned int	k;
	unsigned int	l;

	j = 0;
	l = 0;
	while (s[j])
	{
		while (s[j] == c)
			j++;
		if (s[j] != '\0')
		{
			k = j;
			while (s[k] != c && s[k])
				k++;
			str[l] = malloc((k - j + 1));
			if (ft_free(str, l) == NULL)
				return (NULL);
			ft_strlcpy(str[l], &s[j], k - j + 1);
			l++;
			j = k;
		}
	}
	str[l] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (*s == '\0')
	{
		str = malloc(sizeof(char *));
		str[0] = NULL;
		return (str);
	}
	str = malloc((get_num_ptr(s, c) + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	return (get_ptr(s, c, str));
}
