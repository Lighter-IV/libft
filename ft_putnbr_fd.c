/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csangkhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 09:44:32 by csangkhe          #+#    #+#             */
/*   Updated: 2022/03/02 14:36:56 by csangkhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	w;
	int		check;

	check = 1;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		check = 0;
	}
	else if (n < 0)
	{
		write(fd, "-", 1), n = n / (-1);
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	w = n % 10 + '0';
	if (check)
		write(fd, &w, 1);
}
/*
int	main(void)
{
	ft_putnbr(2147483647);
}*/
