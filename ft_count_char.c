/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 11:15:34 by prosnobl          #+#    #+#             */
/*   Updated: 2017/11/19 11:19:11 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_char(const char *str, char c)
{
	int total;

	total = 0;
	while (*str != c && str)
	{
		total++;
		str++;
	}
	return (total);
}
