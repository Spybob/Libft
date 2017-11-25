/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:13:39 by prosnobl          #+#    #+#             */
/*   Updated: 2017/11/16 20:41:30 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	t;
	char			*str1;
	char			*to_find1;

	i = 0;
	str1 = (char *)str;
	to_find1 = (char *)to_find;
	t = ft_strlen(to_find1);
	if (t == 0)
		return (str1);
	while (str1[i] && i < n)
	{
		j = 0;
		while (to_find1[j] == str1[i + j] && (i + j) < n)
		{
			if (j == t - 1)
				return (str1 + i);
			j++;
		}
		i++;
	}
	return (0);
}
