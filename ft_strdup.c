/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:05:41 by coder             #+#    #+#             */
/*   Updated: 2022/09/07 19:33:15 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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

int	main(int argc, char **argv)
{
	char	*meu_strdup;
	char	*original_strdup;

	if (argc == 2)
	{
		meu_strdup = ft_strdup(argv[1]);
		original_strdup = strdup(argv[1]);
		printf(":%s:\n:%s:\n", meu_strdup, original_strdup);
	}
	return (0);
}
