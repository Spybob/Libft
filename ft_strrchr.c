/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 11:33:49 by prosnobl          #+#    #+#             */
/*   Updated: 2017/11/10 21:02:02 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s1, int c)
{
	char			*u1;
	char			*tmp;
	unsigned int	i;

	u1 = (char *)s1;
	tmp = NULL;
	i = 0;
	while (u1[i])
	{
		if (u1[i] == c)
			tmp = u1 + i;
		i++;
	}
	if (u1[i] == '\0' && c == '\0')
		return (u1 + i);
	return (tmp);
}
