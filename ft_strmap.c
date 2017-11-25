/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 16:03:01 by prosnobl          #+#    #+#             */
/*   Updated: 2017/11/19 11:23:13 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description
** Applique la fonction f à chaque caractère de la chaine de caractères
** passée en paramètre pour créer une nouvelle chaine “fraiche”
** (avec malloc(3)) résultant des applications succes- sives de f.
** Param. #1
** La chaine de caractères sur laquelle itérer.
** Param. #2
** La fonction à appeler sur chaque caractère de s.
** Retour
** La chaine “fraiche” résultant des applications successives de f.
*/

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	int		i;
	char	*s2;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	s2 = (char *)malloc((len + 1) * sizeof(char));
	if (s2 == 0)
		return (NULL);
	else
	{
		while (s[i] && (*f))
		{
			s2[i] = (*f)(s[i]);
			i++;
		}
		s2[i] = '\0';
		return (s2);
	}
	return (NULL);
}
