/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkurose <kkurose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:33:05 by kkurose           #+#    #+#             */
/*   Updated: 2024/04/30 16:00:41 by kkurose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*p;

	i = ft_strlen(s) + 1;
	p = (char *)s;
	while (i > 0)
	{
		if (*(p + i - 1) == (char)c)
			return (p + i - 1);
		i--;
	}
	return (NULL);
}
