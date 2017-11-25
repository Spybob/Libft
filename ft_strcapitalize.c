/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 18:26:10 by prosnobl          #+#    #+#             */
/*   Updated: 2017/11/19 11:57:01 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlower(str);
	while (str[i])
	{
		if (i == 0 && ('a' <= str[i] && str[i] <= 'z'))
			str[i] = str[i] - 32;
		if ((str[i] <= 47 || (58 <= str[i] && str[i] <= 64) ||
					((91 <= str[i]) && (str[i] <= 96))
					|| str[i] >= 123)
				&& ('a' <= str[i + 1] && str[i + 1] <= 'z'))
			str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
