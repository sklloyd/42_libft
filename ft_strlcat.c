/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slloyd <slloyd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:34:02 by slloyd            #+#    #+#             */
/*   Updated: 2022/01/18 16:11:49 by slloyd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (dst[a] && a < size)
		a++;
	while (src [b] && (a + b + 1) < size)
	{
		dst[a + b] = src[b];
			b++;
	}
	if (a < size)
		dst[a + b] = '\0';
	return (a + ft_strlen(src));
}
