/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:56:12 by prosnobl          #+#    #+#             */
/*   Updated: 2017/11/07 20:26:53 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if (!((47 < c && c < 58) || (64 < c && c < 91)
					|| (96 < c && c < 123)))
		return (0);
	else
		return (1);
}
