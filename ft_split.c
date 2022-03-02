/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csangkhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:41:33 by csangkhe          #+#    #+#             */
/*   Updated: 2021/11/11 21:23:44 by csangkhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	in_charset(char c, char *charset)
{
	int	n;

	n = 0;
	while (charset[n])
	{
		if (c == charset[n])
			return (1);
		n++;
	}
	return (0);
}

char	*add_str(char *str, int len)
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

int	count_w(char *str, char *charset)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (str[i])
	{
		if (in_charset(str[i++], charset))
			n++;
	}
	return (n);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		size;
	int		index;
	int		start;
	int		n;

	start = 0;
	index = 0;
	n = 0;
	size = count_w(str, charset);
	split = malloc((size + 1) * sizeof(char *));
	while (str[n])
	{
		if (!in_charset(str[n], charset)
			&& n > 0 && in_charset(str[n - 1], charset))
			start = n;
		if (in_charset(str[n], charset)
			&& n > 0 && !in_charset(str[n - 1], charset))
			split[index++] = add_str(&str[start], n - start);
		else if (!str[n + 1] && !in_charset(str[n], charset))
			split[index++] = add_str(&str[start], n - start + 1);
		n++;
	}
	split[index] = NULL;
	return (split);
}
