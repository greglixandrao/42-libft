/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtreviza <gtreviza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:01:53 by gtreviza          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/09/09 20:06:43 by gtreviza         ###   ########.fr       */
=======
/*   Updated: 2022/09/10 23:22:28 by gtreviza         ###   ########.fr       */
>>>>>>> fdc45da82c11cf722c9ccdd6c7526c92b1e16d1b
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
int strcmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;

	i = 1;
=======
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 1;
	if (n == 0)
		return (0);
>>>>>>> fdc45da82c11cf722c9ccdd6c7526c92b1e16d1b
	while (*s1 && i < n)
	{
		if (*s1 != *s2)
		{
<<<<<<< HEAD
			break;
=======
			break ;
>>>>>>> fdc45da82c11cf722c9ccdd6c7526c92b1e16d1b
		}
		s1++;
		s2++;
		i++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
