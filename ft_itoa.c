/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csangkhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:57:18 by csangkhe          #+#    #+#             */
/*   Updated: 2022/02/22 14:51:20 by csangkhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	cal_digit(int n)
{
	unsigned int	digit;

	digit = 1;
	if (n == -214748648)
		return (10);
	else if (n < 0)
	{
		n = -n;
		digit++;
	}
	while (num >= 10)
	{
		num = num /10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char	*str;
	unsigned int	digit;
	long		num;

	digit = fint_digit(n);
	num = (long) n;
	str = (char *)malloc(sizeof(char) * (digit + 1));
	if (str == NULL)
		return (NULL);
	str[digit] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num >= 0)
	{
		str[digit - 1] = (num % 10) + '0';
		num = num / 10;
		digit--;
	}
	return (str);	
}