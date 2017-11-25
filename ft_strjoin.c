/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:54:45 by prosnobl          #+#    #+#             */
/*   Updated: 2017/11/19 11:23:59 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description
** Alloue (avec malloc(3)) et retourne une chaine de caractères
** “fraiche” terminée par un ’\0’ résultant de la concaténation de s1 et s2.
** Si l’allocation echoue, la fonction renvoie NULL.
** Param. #1
** La chaine de caractères préfixe.
** Param. #2
** La chaine de caractères suffixe.
** Retour
** La chaine de caractère “fraiche” résultant de
** la concaténation des deux chaines.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		t2;
	int		i;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	t2 = ft_strlen(s2);
	i = 0;
	str = (char *)malloc((ft_strlen(s1) + t2 + 1) * sizeof(char));
	if (str == 0)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	str[ft_strlen(s1) + t2] = '\0';
	return (str);
}
