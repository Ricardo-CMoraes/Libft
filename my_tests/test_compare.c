/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_compare.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rida-cos <rida-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 14:31:45 by rida-cos          #+#    #+#             */
/*   Updated: 2025/07/27 18:34:01 by rida-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
isalpha
isdigit
isalnum
isascii
isprint
*/

#include <stdio.h>
#include <string.h>
#include "/nfs/homes/rida-cos/Projetos/Libft/libft.h"

int	main(void)
{
//Funções de Comparação
	printf("Funções de Comparação:\n");
//ft_isalpha
	printf("	Teste isalpha: 		%d | %d | %d\n",
		ft_isalpha('A'), ft_isalpha('h'), ft_isalpha('z'));
//ft_isdigit
	printf("	Teste isdigit: 		%d | %d | %d\n",
		ft_isdigit('0'), !ft_isdigit('a'), ft_isdigit('3'));
//ft_isalnum
	printf("	Teste isalnum: 		%d | %d | %d | %d\n",
		ft_isalnum('0'), ft_isalnum('a'), ft_isalnum('Z'), !ft_isalnum(' '));
//ft_isascii
	printf("	Teste isascii: 		%d | %d | %d | %d | %d\n",
		ft_isascii('0'), ft_isascii('a'), ft_isascii('Z'), ft_isascii(' '),
		!ft_isascii(128));
//ft_isprint
	printf("	Teste isprint: 		%d | %d | %d | %d \n",
		ft_isprint('0'), ft_isprint('a'), ft_isprint('Z'), !ft_isprint(127));

//Funções com Memória
	printf("Funções com Memória:\n");
//ft_memset
	char	s1[] = "Ricardo";
	char	s2[] = "Costa";
	char	s3[] = "Moraes";
	printf("	Teste ft_memset: 	%d | %d | %d\n",
		!strcmp("zzzzrdo", ft_memset(s1, 'z', 4)),
		!strcmp("aasta", ft_memset(s2, 'a', 2)),
		!strcmp("xoraes", ft_memset(s3, 'x', 1)));

//ft_memcpy
	char	dest1[10];
	char	dest2[10];
	char	dest3[10];
	printf("	Teste ft_memcpy: 	%d | %d | %d\n",
		!strncmp("Rica", ft_memcpy(dest1, "Ricardo", 4), 4),
		!strncmp("Co", ft_memcpy(dest1, "Costa", 2), 2),
		!strncmp("Morae", ft_memcpy(dest1, "Moraes", 5), 5));

//ft_memmove
	char	dest4[] = "Ricardo";
	char	dest5[] = "Costa";
	char	dest6[] = "Moraes";
	printf("	Teste ft_memmove: 	%d | %d | %d\n",
		!strncmp("Rica", ft_memmove(dest4 + 2, dest4, 4), 4),
		!strncmp("Co", ft_memmove(dest5 - 3, dest5, 2), 2),
		!strncmp("Morae", ft_memmove(dest6 + 1, dest6, 3), 3));

//ft_memchr
	char	s4[] = "Ricardo";
	char	s5[] = "Costa";
	char	s6[] = "Moraes";
	printf("	Teste ft_memchr: 	%d | %d | %d | %d | %d\n",
		!strcmp("icardo", ft_memchr(s4, 'i', 4)),
		!ft_memchr(s4, 'i', 1),
		!strcmp("sta", ft_memchr(s5, 's', 5)),
		!ft_memchr(s5, 't', 3),
		!strcmp("es", ft_memchr(s6, 'e', 6)));
//ft_memcmp
	printf("	Teste ft_memcmp: 	%d | %d | %d | %d | %d\n",
		!ft_memcmp("Ricardo", "Ricardo", 3),
		!ft_memcmp("Ricardo", "Ricar", 4),
		!!ft_memcmp("Costa", "Costo", 5),
		!!ft_memcmp("moraes", "Moraes", 6),
		!!ft_memcmp("Fals", "False", 5));

//ft_bzero
	char	dest7[] = {'R', 'i', 'c', 'a', 'r', 'd', 'o'};
	char	dest8[] = {0, 0, 0, 'a', 'r', 'd', 'o'};
	char	dest9[] = {0, 0, 0, 0, 'r', 'd', 'o'};
	printf("	Teste ft_bzero: 	%d",
		!!strcmp(dest7, dest8));
	ft_bzero(dest7, 3);
	printf(" | %d",
		!strcmp(dest7, dest8));
	ft_bzero(dest7, 4);
	printf(" | %d\n",
		!strcmp(dest7, dest9));

//Funções com String
	printf("Funções com Memória:\n");
//ft_strlcpy
	char	src[] = "Hello, World!";
	char	dst[20];
	size_t	size;
	size_t	result;

	// Teste 1: Copiando string com espaço suficiente
	size = sizeof(dst);
	result = ft_strlcpy(dst, src, size);
	printf("	Teste ft_strlcpy: 	%d | %d",
		!strcmp(src, dst), !!(result = 13));

	// Teste 2: Copiando com espaço limitado
	char dst2[6];
	size = sizeof(dst2);
	result = ft_strlcpy(dst2, src, size);
	printf(" | %d | %d",
		!strncmp(src, "Hello", 5), (result == 13));

	// Teste 3: size = 0
	char dst3[10] = "XXXXXXXXX";  // Preenchido com valores para ver se não mexe
	result = ft_strlcpy(dst3, src, 0);
	printf(" | %d | %d\n",
		!strcmp(dst3, "XXXXXXXXX"), (result == 13));

	printf("	Teste ft_strlcat:");

	// Teste 1: Espaço suficiente para concatenação completa
	char	dst4[30] = "Hello, ";
	char	src4[] = "World!";
	size_t	size4 = sizeof(dst4);
	size_t	ret4 = ft_strlcat(dst4, src4, size4);
	printf("	%d | %d",
		!strcmp(dst4, "Hello, World!"), // resultado correto
		ret4 == strlen("Hello, ") + strlen("World!"));

	// Teste 2: Espaço limitado — truncamento
	char	dst5[10] = "Hi ";
	char	src5[] = "there!";
	size_t	size5 = sizeof(dst5); // 10
	size_t	ret5 = ft_strlcat(dst5, src5, size5);
	printf(" | %d | %d",
		!strncmp(dst5, "Hi there!", 9), // deve ser truncado com \0 no final
		ret5 == strlen("Hi ") + strlen("there!"));

	// Teste 3: size menor que comprimento de dst — nada é concatenado
	char	dst6[10] = "123456";
	char	src6[] = "ABC";
	size_t	ret6 = ft_strlcat(dst6, src6, 3);
	printf(" | %d | %d\n",
		!strcmp(dst6, "123456"), // não foi alterado
		ret6 == 3 + strlen("ABC"));
}

/*
strlcpy
• strlcat
• toupper
• tolower
• strchr
• strrchr
• strncmp
• memchr
• memcmp
• strnstr
• atoi
*/