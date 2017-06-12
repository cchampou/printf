/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 16:07:24 by cchampou          #+#    #+#             */
/*   Updated: 2017/06/11 16:07:26 by cchampou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnstr(char const *s, size_t n)
{
	size_t	i;

	if (s)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(s[i++]);
		}
	}
}