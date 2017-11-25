/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 16:21:32 by prosnobl          #+#    #+#             */
/*   Updated: 2017/11/19 11:23:22 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description
** Applique la fonction f à chaque caractère de la chaine de caractères
** passée en paramètre en précisant son index pour créer
** une nouvelle chaine “fraiche” (avec malloc(3))
** résultant des applications successives de f.
** Param. #1
** La chaine de caractères sur laquelle itérer.
** Param. #2
** La fonction à appeler sur chaque caractère de s en précisant son index.
** Retour
** La chaine “fraiche” résultant des applications successives de f.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*s2;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	s2 = (char *)malloc((len + 1) * sizeof(char));
	if (s2 == 0)
		return (NULL);
	while (s[i])
	{
		s2[i] = (*f)(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
