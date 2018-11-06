/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:40:19 by erli              #+#    #+#             */
/*   Updated: 2018/11/06 17:35:50 by erli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>

size_t	ft_strlen(char *str);
char	*ft_strdup(char *src);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t len);

#endif
