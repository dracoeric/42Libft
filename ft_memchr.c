/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:19:25 by erli              #+#    #+#             */
/*   Updated: 2018/11/07 13:13:05 by erli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	byte;
	unsigned char	*str;
	size_t			i;
	void			*ptr;

	str = (unsigned char *)s;
	i = 0;
	byte = (unsigned char)c;
	str = (unsigned char *)s;
	ptr = (NULL);
	while (i < n && str[i] != byte)
		i++;
	if (str[i] == byte)
		ptr = ((void *)s) + i;
	return (ptr);
}
