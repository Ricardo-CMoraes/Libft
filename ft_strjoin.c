/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rida-cos <rida-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 20:09:34 by rida-cos          #+#    #+#             */
/*   Updated: 2025/07/19 20:37:47 by rida-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	joined = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!joined)
		return (NULL);
	ft_memcpy(joined, s1, s1_len);
	ft_memcpy(joined + s1_len, s2, s2_len);
	joined[s1_len + s2_len] = '\0';
	return (joined);
}

#include <stdio.h>

int main(void)
{
	char *a = "Hello, ";
	char *b = "world!";
	char *res = ft_strjoin(a, b);

	if (res)
	{
		printf("Resultado: %s\n", res);
		free(res);
	}
	else
	{
		printf("Erro ao alocar memória\n");
	}
	return 0;
}