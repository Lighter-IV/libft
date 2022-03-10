/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csangkhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 23:16:27 by csangkhe          #+#    #+#             */
/*   Updated: 2022/03/07 22:37:49 by csangkhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	check_str(char const s1, char const *set)
{
	while (*set != '\0')
	{
		if (s1 == *set)
			return (0);
		set++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		len;
	int		start;

	start = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(""));
	while (!check_str(s1[start], set))
		start++;
	len = ft_strlen(s1);
	while (start < len && !check_str(s1[len - 1], set))
		len--;
	str = ft_substr(s1, start, len - start);
	return (str);
}
