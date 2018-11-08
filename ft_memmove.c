/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:01:42 by erli              #+#    #+#             */
/*   Updated: 2018/11/07 12:13:25 by erli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstbyte;
	unsigned char	*srcbyte;
	unsigned char	copy[len];
	size_t			i;

	i = 0;
	dstbyte = (unsigned char *)dst;
	srcbyte = (unsigned char *)src;
	while (i < len)
	{
		copy[i] = srcbyte[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dstbyte[i] = copy[i];
		i++;
	}
	return (dst);
}
