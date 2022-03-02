/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csangkhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:50:24 by csangkhe          #+#    #+#             */
/*   Updated: 2022/03/01 23:03:16 by csangkhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_temp;

	c = c % 256;
	while (*s != '\0')
	       s++;
	s--;
	while (*s != c && s > s_temp)
		s--;
	if (*s == c)
		return (s);
	else
		return (NULL);
}
