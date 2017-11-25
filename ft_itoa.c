/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:32:40 by prosnobl          #+#    #+#             */
/*   Updated: 2017/11/19 10:42:40 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue (avec malloc(3)) et retourne une chaine de caractères “fraiche”
** terminée par un ’\0’ représentant l’entier n passé en paramètre.
** Les nombres négatifs doivent être gérés.
** Si l’allocation échoue, la fonction renvoie NULL.
** Param. #1
** L’entier à convertir en une chaine de caractères.
** Retour
** La chaine de caractères représentant l’entier passé en para- mètre.
*/

#include "libft.h"

static int	ft_digitlen(int n)
{
	int len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*ft_nbnull(int n)
{
	char	*str;
	int		size;

	size = 0;
	if (n == 0)
		size = 2;
	str = (char *)malloc(sizeof(char) * size);
	str[0] = 0 + '0';
	str[1] = '\0';
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	nb = (long)n;
	len = ft_digitlen(nb);
	if (n < 0)
		nb = -nb;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (NULL);
	if (nb == 0)
		return (ft_nbnull(0));
	if (n < 0)
		str[0] = '-';
	str[len] = '\0';
	len--;
	while (nb != 0)
	{
		str[len--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (str);
}
