/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:59:52 by erli              #+#    #+#             */
/*   Updated: 2018/11/08 12:12:41 by erli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		l1;
	char	*join;

	l1 = ft_strlen(s1);
	if (!(join = (char *)malloc(sizeof(char) * (ft_strlen(s2) + l1 + 1))))
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		join[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		join[l1 + i] = s2[i];
		i++;
	}
	join[l1 + i] = '\0';
	return (join);
}
