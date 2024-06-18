/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkurose <kkurose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:10:42 by kkurose           #+#    #+#             */
/*   Updated: 2024/05/04 22:10:44 by kkurose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (*(p + i) != (char)c)
	{
		if (!*(p + i))
			return (NULL);
		i++;
	}
	return ((p + i));
}
