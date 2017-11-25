/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:49:27 by prosnobl          #+#    #+#             */
/*   Updated: 2017/11/18 20:24:20 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if ((int)((char const *)src - (char *)dest) > 0)
	{
		while (i < n)
		{
			*((char *)dest + i) = *((char const *)src + i);
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			*((char *)dest + n - 1 - i) = *((char const *)src + n - 1 - i);
			i++;
		}
	}
	return (dest);
}
