/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rida-cos <rida-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:29:45 by rida-cos          #+#    #+#             */
/*   Updated: 2025/07/20 18:23:42 by rida-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*str;

	if (!dest || !src)
		return (0);
	destination = (unsigned char *)dest;
	str = (unsigned char *)src;
	if (dest >= src)
	{
		while (n--)
			*destination++ = *str++;
	}
	else if (dest < src)
	{
		while (n--)
			destination[n] = str[n];
	}
	return (dest);
}
