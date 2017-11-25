/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:16:31 by prosnobl          #+#    #+#             */
/*   Updated: 2017/11/19 11:24:13 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description
** Alloue (avec malloc(3)) et retourne une copie de la chaine
** passée en paramètre sans les espaces blancs au debut et à la fin
** de cette chaine.
** On considère comme espaces blancs les caractères ’ ’, ’\n’ et ’\t’.
** Si s ne contient pas d’espaces blancs au début ou à la fin,
** la fonction renvoie une copie de s.
** Si l’allocation echoue, la fonction renvoie NULL.
** Param. #1
** La chaine de caractères à trimmer.
** Retour
** La chaine de caractère “fraiche” trimmée ou bien une copie de s sinon.
*/

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*u;
	int		start;
	int		end;

	start = 0;
	if (!s)
		return (NULL);
	end = ft_strlen(s) - 1;
	u = (char *)malloc((end + 1) * sizeof(char *));
	if (u == 0)
		return (NULL);
	u = (char *)s;
	while (s[start] == ' ' || s[start] == ',' || s[start] == '\n' ||
			s[start] == '\t')
	{
		if (start == end)
			return ("");
		start++;
	}
	while (s[end] == ' ' || s[end] == ',' || s[end] == '\n' ||
			s[end] == '\t')
		end--;
	end = end - start + 1;
	return (ft_strsub(s, start, end));
}
