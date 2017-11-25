/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:54:01 by prosnobl          #+#    #+#             */
/*   Updated: 2017/11/19 11:22:20 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description
** Applique la fonction f à chaque caractère de la chaine de caractères
** passée en paramètre. Chaque caractère est passé par adresse
** à la fonction f afin de pouvoir être modifié si nécéssaire.
** Param. #1
** La chaine de caractères sur laquelle itérer.
** Param. #2
** La fonction à appeler sur chaque caractère de s.
** Retour
** Rien.
*/

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			(*f)(s + i);
			i++;
		}
	}
}
