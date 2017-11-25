/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 19:39:52 by prosnobl          #+#    #+#             */
/*   Updated: 2017/11/19 12:52:44 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long			res;
	long			sign;
	long			i;
	unsigned char	*str1;

	res = 0;
	sign = 1;
	i = 0;
	str1 = (unsigned char *)str;
	while (str[i] != '\0' && (str[i] == '\n' || str[i] == '\t'
				|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'
				|| str[i] == ' '))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str1[i] != '\0' && ('0' <= str1[i] && str1[i] <= '9'))
	{
		res = res * 10 + str1[i] - '0';
		i++;
	}
	return (sign * res);
}
