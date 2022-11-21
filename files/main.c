/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:31:58 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/09 19:43:00 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main (void)
{
/*	//Init variables who store parameters of functions	tested
	char	str0[] = "kdsfgjsdgfsjd";
	char	str1[] = "kdsfgjsdgfsjd";
 	char	str2[] = "1646461981873";
	char	str3[] = "1646461981873";
	char	dest0[] = "destdestdest";
	char	src0[] = "srcsrcsrcrsc";
	char	dest1[] = "destdestdest";
	char	src1[] = "srcsrcsrcrsc";
	char	dest2[] = "destdestdestdesresd";
	char	src2[] = "srcsrcsrcrsc";
	char	dest3[] = "destdestdestdesresd";
	char	src3[] = "srcsrcsrcrsc";
	char	str4[] = "Bienvenue a l'ecole";
	char	str5[] = "oooooooououoooooooouououoooouuuuu\200";
	char	str6[] = "Je suis a l'ecole d'informatique\0";
	char	str7[10];
	char    str8[] = "Ceci est une grande phrase qui parle de cuisine";
	char    str9[13] = "grande phrase";
	char    str10[] = "Le temps est vraiment beau aujourd'hui, mais il fait froid";
	int     str11[7] = {-49, 49, 1, -1, 0, -2, 2};

	int     i;
	int     *ft_ptr;
	int     *ptr;

	i = 20;

	//Preparing tests
	memset(str7, 'r', 15);
	
	//Calling my functions
	ft_memset(str0, 0, 85);
 	ft_bzero(str2, 5);
	ft_memcpy(dest0, src0, 12);
	ft_memmove(dest3, src3, 3);
	ft_ptr = ft_calloc(i, 1);

	//Calling officials functions
	memset(str1, 0, 24);
 	bzero(str3, 5); 
	memcpy(dest1, src1, 12);
	memmove(dest2, src2, 3);
	ptr = calloc(i, 1);

	//Showing the results
	printf("-------- Results -------- \n");
	printf("isalpha - %d | %d\n", ft_isalpha('A'), isalpha('A'));
	printf("isdigit - %d | %d\n", ft_isdigit('1'), isdigit('1'));
	printf("isalnum - %d | %d\n", ft_isalnum('B'), isalnum('B') );
	printf("isascii - %d | %d\n", ft_isascii('&'), isascii('&'));
	printf("isprint - %d | %d\n", ft_isprint('|'), isprint('|'));
	printf("strlen  - %ld | %ld\n", ft_strlen("Bonjour"), strlen("Bonjour"));
	printf("memset  - %d | %d\n", *str0, *str1);
	printf("bzero   - %d | %d\n", *str2, *str3);
	printf("memcpy  - %s | %s\n", dest0, dest1);
	printf("memmove - %s | %s\n", dest2, dest3);
	printf("strlcat - %d | -\n", ft_strlcat(str7, "lorem ipsum dolor sit amet", 4)*//*, strlcat(str7, "lorem ipsum dolor sit amet", 4)*//*);
	printf("strlcpy - %d | -\n", ft_strlcpy(str7, "lorem ipsum dolor sit amet", 4)*//*, strlcpy(str7, "lorem ipsum dolor sit amet", 4)*//*);
	printf("toupper - %d | %d\n", ft_toupper('\a'), toupper('\a'));
	printf("tolower - %d | %d\n", ft_tolower('X'), tolower('X'));
	printf("strchr  - %s | %s\n", ft_strchr(str4, '\0'), strchr(str4, '\0'));
	printf("strrch  - %s | %s\n", ft_strrchr(str5, 'o'), strrchr(str5, 'o'));
	printf("strncmp - %d | %d\n", ft_strncmp(str5, str6, 10), strncmp(str5, str6, 10));
	printf("memchr  - %p | %s\n", (char *)ft_memchr(str4, 'a', 3), (char *)memchr(str11, -1, 7));
	printf("memcmp  - %d | %d\n", ft_memcmp("abcdefghij", "abcdefgxyz", 7), memcmp("abcdefghij", "abcdefgxyz", 7));
	printf("strnstr - %s | -\n", ft_strnstr(str8, str9, 47)*//*, strnstr(str8, str9, 48)*//*);
	printf("calloc  - %d | %d\n", ft_ptr[10], ptr[10]);
	printf("strdup  - %s | %s\n", ft_strdup(str10), strdup(str10));
	printf("substr  - %s | -\n", ft_substr(str10, 10, 32));
	printf("strjoin - %s | -\n", ft_strjoin(str10, str9));
 	printf("itoa    - %s | -\n", ft_itoa(-123156));
	printf("-------- Results -------- \n");*/

	char * str = strdup("0123456789");
    char * s = ft_substr(str, 9, 10);
	printf("%s\n", s);

	//End
	return (0);
}
