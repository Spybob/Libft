/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 16:36:24 by prosnobl          #+#    #+#             */
/*   Updated: 2017/11/19 12:00:58 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description
** Compare lexicographiquement s1 et s2.
** Si les deux chaines sont égales, la fonction retourne 1, ou 0 sinon.
** Param. #1
** La première des deux chaines à comparer.
** Param. #2
** La seconde des deux chaines à comparer.
** Retour
** 1 ou 0 selon que les deux chaines sont égales ou non.
*/

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	unsigned int i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
