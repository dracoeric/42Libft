/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 09:44:05 by erli              #+#    #+#             */
/*   Updated: 2018/11/08 09:45:07 by erli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		str[i] = '\0';
		i++;
	}
}
