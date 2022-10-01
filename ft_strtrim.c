/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtreviza <gtreviza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 04:28:30 by gtreviza          #+#    #+#             */
/*   Updated: 2022/10/01 05:47:41 by gtreviza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strtrim(char const *s1, char const *set)
{
	char	*cut_initial;
	char	*dest;
	
	ft_strchr(set, *s1);
	dest = ft_strrchr(*cur_inicial, set);
	return (dest);
	
}