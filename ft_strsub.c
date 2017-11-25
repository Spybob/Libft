/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:09:36 by prosnobl          #+#    #+#             */
/*   Updated: 2017/11/19 11:23:46 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description
** Alloue (avec malloc(3)) et retourne la copie “fraiche” d’un tronçon
** de la chaine de caractères passée en paramètre.
** Le tronçon commence à l’index start et à pour longueur len.
** Si start et len ne désignent pas un tronçon de chaine valide,
** le comportement est indéterminé.
** Si l’allocation échoue, la fonction renvoie NULL.
** Param. #1
** La chaine de caractères dans laquelle chercher le tronçon à copier.
** Param. #2
** L’index dans la chaine de caractères où débute le tronçon à copier.
** Param. #3
** La longueur du tronçon à copier.
** Retour
** Le tronçon.
*/

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*u1;
	unsigned int	i;

	i = 0;
	u1 = (char *)malloc((len + 1) * sizeof(char));
	if (u1 == 0)
		return (NULL);
	if (!s)
		return (NULL);
	u1[len] = '\0';
	while (len > 0)
	{
		u1[i] = s[start];
		i++;
		start++;
		len--;
	}
	return (u1);
}
