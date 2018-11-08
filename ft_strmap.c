/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:55:37 by erli              #+#    #+#             */
/*   Updated: 2018/11/08 11:01:11 by erli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *src, char (*f)(char))
{
	size_t	n;
	char	*str;
	int		i;

	n = ft_strlen(src);
	str = ft_strnew(n + 1);
	i = 0;
	if (str == NULL)
		return (NULL);
	while (i < n)
	{
		str[i] = f(src[i]);
		i++;
	}
	str[n] = '\0';
	return (str);
}
