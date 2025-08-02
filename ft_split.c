/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: rida-cos <rida-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 15:46:42 by rida-cos          #+#    #+#             */
/*   Updated: 2025/08/02 18:22:23 by rida-cos         ###   ########.fr       */
=======
/*   By: rdcm <rdcm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 15:46:42 by rida-cos          #+#    #+#             */
/*   Updated: 2025/07/30 00:14:14 by rdcm             ###   ########.fr       */
>>>>>>> 9f737888b4d6b6841ebf7f10c9a0d41e1935e561
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

<<<<<<< HEAD
static void	free_all(char **arr, int position)
{
	while (position--)
		free(arr[position]);
	free(arr);
}

static int	get_word(char **string_arr, const char *s, char c, int *index)
{
	const char	*start;
	const char	*end;

	while (*s)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		start = s;
		end = ft_strchr(s, c);
		if (end)
			s = end;
		else
			s = s + ft_strlen(s);
		string_arr[*index] = ft_substr(start, 0, s - start);
		if (!string_arr[*index])
			return (0);
		(*index)++;
	}
	return (1);
=======
static void	get_word(char **string_arr, char *s, char c, int *index)
{
	int		i;
	int		j;
	int		len;
	char	buffer[8000];

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		while (s[i] == c && i < len)
			i++;
		j = 0;
		while (s[i] != c && s[i] != '\0' && i < len)
		{
			buffer[j] = s[i];
			i++;
			j++;
		}
		if (j > 0)
		{
			buffer[j] = '\0';
			string_arr[*index] = ft_strdup(buffer);
			(*index)++;
		}
	}
>>>>>>> 9f737888b4d6b6841ebf7f10c9a0d41e1935e561
}

char	**ft_split(char const *s, char c)
{
	int		nbwords;
	int		string_index;
	char	**string_arr;

	string_index = 0;
	nbwords = count_words((char *)s, c);
	string_arr = malloc(sizeof(char *) * (nbwords + 1));
	if (!string_arr)
		return (0);
<<<<<<< HEAD
	if (!get_word(string_arr, (char *)s, c, &string_index))
	{
		free_all(string_arr, nbwords);
		return (0);
	}
=======
	get_word(string_arr, (char *)s, c, &string_index);
>>>>>>> 9f737888b4d6b6841ebf7f10c9a0d41e1935e561
	string_arr[nbwords] = NULL;
	return (string_arr);
}
