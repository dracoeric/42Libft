/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 09:31:42 by erli              #+#    #+#             */
/*   Updated: 2018/11/08 09:40:22 by erli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strnew(size_t n)
{
	char	*str;
	size_t	i;

	if (!(str = (char *)malloc(sizeof(char) * n)))
		return (NULL);
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
