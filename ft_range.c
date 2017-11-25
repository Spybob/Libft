/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 18:35:43 by prosnobl          #+#    #+#             */
/*   Updated: 2017/11/16 19:05:42 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int len;
	int *tab;
	int i;

	len = max - min;
	i = 0;
	if (len <= 0)
		tab = NULL;
	else
	{
		tab = malloc(len * sizeof(int));
		while (min + i < max)
		{
			tab[i] = min + i;
			i++;
		}
	}
	return (tab);
}
