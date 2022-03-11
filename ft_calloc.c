/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slloyd <slloyd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:30:34 by slloyd            #+#    #+#             */
/*   Updated: 2022/01/19 15:57:40 by slloyd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	a;
	void	*b;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	a = count * size;
	b = malloc(a);
	if (b == NULL)
		return (NULL);
	else
		ft_bzero(b, a);
	return (b);
}
