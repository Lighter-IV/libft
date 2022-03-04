/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csangkhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:41:28 by csangkhe          #+#    #+#             */
/*   Updated: 2022/03/04 14:12:42 by csangkhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	find_digit(int n)
{
	unsigned int	digit;

	digit = 1;
	if (n == -2147483648)
		return (11);
	else if (n < 0)
	{
		n = -n;
		digit++;
	}
	while (n >= 10)
	{
		n = n / 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		digit;
	long long	num;

	num = (long long) n;
	digit = find_digit(n);
	str = (char *) malloc(sizeof(char) * (digit + 1));
	if (str == NULL)
		return (NULL);
	str[digit] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	else if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[digit - 1] = (num % 10) + '0';
		num = num / 10;
		digit--;
	}
	return (str);
}
