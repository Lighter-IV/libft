/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csangkhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:31:45 by csangkhe          #+#    #+#             */
/*   Updated: 2022/03/10 22:11:51 by csangkhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*str;
	size_t		len;
	size_t		index;

	index = 0;
	len = ft_strlen(s1) + 1;
	str = (char *) malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (index < len - 1)
	{
		str[index] = s1[index];
		index++;
	}
	str[index] = '\0';
	return (str);
}
