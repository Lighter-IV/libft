/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csangkhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:50:24 by csangkhe          #+#    #+#             */
/*   Updated: 2022/03/04 10:56:26 by csangkhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_temp;

	c = c % 256;
	s_temp = (char *)s;
	while (*s_temp != '\0')
		s_temp++;
	while (*s_temp != c && s_temp > s)
		s_temp--;
	if (*s_temp == c)
		return (s_temp);
	else
		return (0);
}
