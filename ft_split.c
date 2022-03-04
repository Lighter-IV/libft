/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csangkhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:41:33 by csangkhe          #+#    #+#             */
/*   Updated: 2022/03/04 22:55:42 by csangkhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*add_str(char const *str, int len)
{
	char	*split;
	int		n;

	split = malloc((len + 1) * sizeof(char));
	n = 0;
	while (n < len)
	{
		split[n] = str[n];
		n++;
	}
	split[n] = '\0';
	return (split);
}

int	count_w(char const *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	if (s[0] == '\0')
		return (0);
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] && s[i + 1] != c)
			n++;
		i++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		size;
	int		index;
	int		start;
	int		n;

	start = 0;
	index = 0;
	n = 0;
	size = count_w(s, c);
	split = malloc((size + 1) * sizeof(char *));
	while (s[n])
	{
		if (s[n] != c && n > 0 && s[n - 1] == c)
			start = n;
		if (s[n] == c && n > 0 && s[n - 1] != c)
			split[index++] = add_str(&s[start], n - start);
		else if (!s[n + 1] && s[n] != c)
			split[index++] = add_str(&s[start], n - start + 1);
		n++;
	}
	split[index] = NULL;
	return (split);
}
