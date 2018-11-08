/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 09:02:50 by erli              #+#    #+#             */
/*   Updated: 2018/11/08 09:09:38 by erli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t n)
{
	void			*memzone;
	unsigned char	*s;
	size_t			i;

	if (!(memzone = malloc(n)))
		return (NULL);
	s = (unsigned char *)memzone;
	while (i < n)
	{
		s[i] = (unsigned char)0;
		i++;
	}
	return (memzone);
}
