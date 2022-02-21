/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csangkhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:57:18 by csangkhe          #+#    #+#             */
/*   Updated: 2022/02/21 22:27:03 by csangkhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa(int n)
{
	char	*alpha;
	unsigned int	digit;
	unsigned int	num;

	if (n < 0)
		num = -n;
	digit = 1;
	while ( num >= 10)
	{
		num = num / 10;
		digit++;
	}
	malloc
	if (n < 0)
	{
		n = -n;
		*alpha = '-';
	}
	while ( 
}
