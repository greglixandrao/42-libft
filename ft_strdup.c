/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:05:41 by coder             #+#    #+#             */
/*   Updated: 2022/09/07 23:39:44 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s);

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	new = (char *)malloc(sizeof(*src) * ft_strlen(src) + 1);
	i = 0;
	if (!new)
		return (NULL);
	while (*src)
		new[i++] = *src++;
	new[i] = '\0';
	return (new);
}
