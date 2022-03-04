/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csangkhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:41:12 by csangkhe          #+#    #+#             */
/*   Updated: 2022/03/03 13:18:52 by csangkhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	index;
	size_t	s_len;

	index = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		str = (char *) malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	else if (s_len > len)
		str = (char *) malloc(sizeof(char) * (len + 1));
	else
		str = (char *) malloc(sizeof(char) * (s_len - start + 1));
	if (str == NULL)
		return (NULL);
	while (index < len && s[index + start] != '\0')
	{
		str[index] = s[index + start];
		index++;
	}
	str[index] = '\0';
	return (str);
}
