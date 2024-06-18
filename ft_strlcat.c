/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkurose <kkurose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:10:54 by kkurose           #+#    #+#             */
/*   Updated: 2024/05/04 22:46:01 by kkurose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	i = 0;
	if (!dst && dstsize == 0)
		return (srclen);
	dstlen = ft_strlen(dst);
	if (dstsize <= dstlen || (!dst && !dstsize))
		return (dstsize + srclen);
	while ((i < dstsize - dstlen - 1))
	{
		if (src[i] == 0)
			break ;
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[i + dstlen] = 0;
	return (srclen + dstlen);
}
