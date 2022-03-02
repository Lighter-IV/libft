/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csangkhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:10:49 by csangkhe          #+#    #+#             */
/*   Updated: 2022/03/02 23:11:45 by csangkhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_temp;
	char	*src_temp;

	dst_temp = (char *)dst;
	src_temp = (char *)src;
	if (dst == src)
		return (dst);
	else if (src_temp < dst_temp)
	{
		while (len--)
			*(dst_temp + len) = *(src_temp + len);
		return (dst);
	}
	while (len--)
		*dst_temp++ = *src_temp++;
	return (dst);
}
