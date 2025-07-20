/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rida-cos <rida-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 18:38:21 by rida-cos          #+#    #+#             */
/*   Updated: 2025/07/20 19:21:49 by rida-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	fill_number(char *buffer, int *index, long n)
{
	char	a;

	if (n >= 10)
	{
		fill_number(buffer, index, n / 10);
		n = n % 10;
	}
	if (n < 10)
	{
		a = n + '0';
		buffer[*index] = a;
		(*index)++;
	}
}

char	*ft_itoa(int n)
{
	int		i;
	char	*buffer;
	long	nb;

	nb = n;
	buffer = malloc(sizeof(char) * 13);
	i = 0;
	if (nb < 0)
	{
		buffer[i] = '-';
		nb = (-1) * nb;
		i++;
	}
	fill_number(buffer, &i, nb);
	buffer[i] = '\0';
	return (buffer);
}
