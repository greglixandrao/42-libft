/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtreviza <gtreviza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 19:50:08 by gtreviza          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/09/09 19:50:46 by gtreviza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(int c)
=======
/*   Updated: 2022/09/10 23:22:42 by gtreviza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
>>>>>>> fdc45da82c11cf722c9ccdd6c7526c92b1e16d1b
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
