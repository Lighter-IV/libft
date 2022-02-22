/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csangkhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:09:28 by csangkhe          #+#    #+#             */
/*   Updated: 2022/02/22 17:08:00 by csangkhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"
#include <unistd.h>

int	ft_strlen(char *str)
{
	int count;
	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
/*
int	main(void)
{
	int	num;
	char	*test = "test";

	num = ft_strlen(test);
}*/
