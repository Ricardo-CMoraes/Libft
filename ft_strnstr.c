/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rida-cos <rida-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:47:54 by rida-cos          #+#    #+#             */
/*   Updated: 2025/07/20 18:26:23 by rida-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	char	*ptr1;
	char	*ptr2;
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return (big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		ptr1 = big + i;
		ptr2 = little;
		while ((little[j] == big[i + j])
			&& little[j] != '\0'
			&& big[i + j] != '\0'
			&& (i + j) < len)
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (0);
}
