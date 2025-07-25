/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rida-cos <rida-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 15:46:42 by rida-cos          #+#    #+#             */
/*   Updated: 2025/07/20 18:10:03 by rida-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char *s, char c)
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

void	get_word(char **string_arr, char *s, char c, int *index)
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
	get_word(string_arr, (char *)s, c, &string_index);
	return (string_arr);
}

//Ricardo da Costa Moraes
//^

/*
Function name 		ft_split
Prototype 			char **ft_split(char const *s, char c);
Turn in files 		-
Parameters 			s: The string to be split.
					c: The delimiter character.
Return value 		The array of new strings resulting from the split.
					NULL if the allocation fails.
External functs. 	malloc, free
Description 		Allocates memory (using malloc(3)) and returns an
					array of strings obtained by splitting ’s’ using
					the character ’c’ as a delimiter. The array must
					end with a NULL pointer
*/
