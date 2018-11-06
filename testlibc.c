/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlibc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:09:37 by erli              #+#    #+#             */
/*   Updated: 2018/11/06 17:06:04 by erli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int		main(void)
{
	char str[10];

//Test Strlen
	printf("___=== Test de ft_strlen ===___\n");
	printf("Longueur de 'caca' ft = %zu   libc = %lu\n", ft_strlen("caca"), strlen("caca"));
	printf("Longueur de '' ft = %zu   libc = %lu\n", ft_strlen(""), strlen(""));
	printf("Longueur de 'cacafumant' ft = %zu   libc = %lu\n", ft_strlen("cacafumant"), strlen("cacafumant"));
	printf("\n\n\n");


//Test de Strdup
	printf("___=== Test de ft_strdup ===___\n");
	printf(" src = ''\n");
	printf("%s\n", ft_strdup(""));
	printf("%s\n", strdup(""));
	printf(" src = 'caca'\n");
	printf("%s\n", ft_strdup("caca"));
	printf("%s\n", strdup("caca"));
	printf(" src = 'olelele'\n");
	printf("%s\n", ft_strdup("olelele"));
	printf("%s\n", strdup("olelele"));
	printf(" src = 'qwertyuiopasdfghjkl;:'\n");
	printf("%s\n", ft_strdup("qwertyuiopasdfghjkl;:"));
	printf("%s\n", strdup("qwertyuiopasdfghjkl;:"));
	printf("\n\n\n");


//Test de Strdup
	printf("___=== Test de ft_memeset ===___\n");
	str[9] = '\0';
	printf("%s\n", ft_memset(str, 90, 9)); 
	return (0);
}
