/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 11:10:46 by prosnobl          #+#    #+#             */
/*   Updated: 2017/11/19 11:15:25 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(const char *str, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*str)
	{
		if (j == 0 && *str != c)
		{
			j = 1;
			i++;
		}
		else if (j == 1 && *str == c)
			j = 0;
		str++;
	}
	return (i);
}
