/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csangkhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 23:04:12 by csangkhe          #+#    #+#             */
/*   Updated: 2022/03/04 10:14:49 by csangkhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nh;
	size_t	nn;
	size_t	nh_temp;

	nh = -1;
	nn = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (++nh < len && haystack[nh] != '\0')
	{
		if (haystack[nh] == needle[nn])
		{
			nh_temp = nh;
			while (haystack[nh] == needle[nn] && haystack[nh] && nh < len)
			{
				nn++;
				nh++;
			}
			if (needle[nn] == '\0')
				return ((char *)haystack + nh_temp);
			nh = nh_temp;
			nn = 0;
		}
	}
	return (NULL);
}
