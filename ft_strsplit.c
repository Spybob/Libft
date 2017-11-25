/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 21:05:52 by prosnobl          #+#    #+#             */
/*   Updated: 2017/11/19 15:54:59 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description
** Alloue (avec malloc(3)) et
** retourne un tableau de chaines de caractères “fraiches”
** (toutes terminées par un ’\0’, le tableau également donc)
** résultant de la découpe de s selon le caractère c.
** Si l’allocation echoue, la fonction retourne NULL.
** Exemple : ft_strsplit("*salut*les***etudiants*", ’*’)
** renvoie le tableau ["salut", "les", "etudiants"].
** Param. #1
** La chaine de caractères à découper.
** Param. #2
** Le caractère selon lequel découper la chaine.
** Retour
** Le tableau de chaines de caractères “fraiches” résultant de la découpe.
*/

#include "libft.h"

static unsigned int		ft_is_c(const char c, const char t)
{
	return (c == t);
}

static size_t			ft_count(char const *s, char const c)
{
	size_t	count;
	size_t	i;

	if (s[0] != 0)
	{
		i = 1;
		count = (ft_is_c(s[0], c) == 0) ? 1 : 0;
		while (s[i])
		{
			if (ft_is_c(s[i - 1], c) == 1
					&& ft_is_c(s[i], c) == 0)
				count++;
			i++;
		}
		return (count);
	}
	else
		return (0);
}

static size_t			ft_word(const char *str, const char c)
{
	size_t	wordlen;
	size_t	i;

	wordlen = 0;
	i = 0;
	while (str[i] && !ft_is_c(str[i], c))
	{
		wordlen++;
		i++;
	}
	return (wordlen);
}

char					**ft_strsplit(char const *s, char c)
{
	char	**sp;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s || !(sp = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while ((k = 0) || s[i])
	{
		while (s[i] && ft_is_c(s[i], c))
			i++;
		if (s[i])
		{
			if (!(sp[j] = (char *)malloc(sizeof(char) *
							(ft_word(s + i, c) + 1))))
				return (NULL);
			while (s[i] && !ft_is_c(s[i], c))
				sp[j][k++] = s[i++];
			sp[j++][k] = 0;
		}
	}
	sp[j] = 0;
	return (sp);
}
