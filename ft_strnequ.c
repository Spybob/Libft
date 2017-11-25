/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:02:24 by prosnobl          #+#    #+#             */
/*   Updated: 2017/11/19 12:13:07 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description
** Compare lexicographiquement s1 et s2 jusqu’à n caractères maximum
** ou bien qu’un ’\0’ ait été rencontré.
** Si les deux chaines sont égales, la fonction retourne 1, ou 0 sinon.
** Param. #1
** La première des deux chaines à comparer.
** Param. #2
** La seconde des deux chaines à comparer.
** Param. #3
** Le nombre de caractères à comparer au maximum.
** Retour
** 1 ou 0 selon que les deux chaines sont égales ou non.
*/

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (!s1 || !s2 || !n)
		return (1);
	if (s1 == s2)
		return (1);
	if (s1[i] == '\0' || s2[i] == '\0')
		return (0);
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
