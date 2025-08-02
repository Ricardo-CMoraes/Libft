/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rida-cos <rida-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:36:55 by rida-cos          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/08/02 17:20:25 by rida-cos         ###   ########.fr       */
=======
/*   Updated: 2025/08/02 15:06:52 by rida-cos         ###   ########.fr       */
>>>>>>> 9f737888b4d6b6841ebf7f10c9a0d41e1935e561
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*pointer;
	unsigned char	*ptr;
	size_t			i;
	size_t			total;

<<<<<<< HEAD
	if (!nmemb || !size)
		return (ft_strdup(""));
	if (nmemb > (((size_t) - 1) / size))
=======
	if ((nmemb > (SIZE_MAX) / size))
>>>>>>> 9f737888b4d6b6841ebf7f10c9a0d41e1935e561
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
