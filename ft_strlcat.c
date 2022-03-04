/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csangkhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:24:53 by csangkhe          #+#    #+#             */
/*   Updated: 2022/03/04 10:58:31 by csangkhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	total;
	size_t	dst_in;
	size_t	src_in;

	dst_in = ft_strlen(dst);
	total = dst_in + ft_strlen(src);
	src_in = 0;
	if (dst_in + 1 > dstsize)
		return (total - dst_in + dstsize);
	while (src[src_in] != '\0' && dst_in + 1 < dstsize)
	{
		dst[dst_in] = src[src_in];
		dst_in++;
		src_in++;
	}
	dst[dst_in] = '\0';
	return (total);
}
