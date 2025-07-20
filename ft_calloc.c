/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rida-cos <rida-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:36:55 by rida-cos          #+#    #+#             */
/*   Updated: 2025/07/20 18:19:36 by rida-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	void			*pointer;
	unsigned char	*ptr;
	size_t			i;
	size_t			total;

	if (nmemb == 0 || size == 0)
		return (0);
	if (nmemb > (SIZE_MAX) / size)
		return (0);
	total = nmemb * size;
	pointer = (void *)malloc(total);
	if (!pointer)
		return (0);
	ptr = (unsigned char *)pointer;
	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (pointer);
}
