/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csangkhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:09:28 by csangkhe          #+#    #+#             */
/*   Updated: 2022/03/02 23:06:36 by csangkhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int count;
	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
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
