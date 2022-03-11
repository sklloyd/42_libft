/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slloyd <slloyd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:30:52 by slloyd            #+#    #+#             */
/*   Updated: 2022/01/25 16:05:48 by slloyd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		a;
	int		b;
	char	*str;

	a = 0;
	b = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (b + 1));
	while (a < b)
	{
		str[a] = s[a];
		a++;
	}
	str[a] = '\0';
	return (str);
}
