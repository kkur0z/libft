/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkurose <kkurose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:10:51 by kkurose           #+#    #+#             */
/*   Updated: 2024/05/04 22:10:57 by kkurose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = (char *)malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!str)
		return (NULL);
	if (!(*s1) && !(*s2))
		str[0] = 0;
	else
	{
		i = 0;
		j = 0;
		while (*(s1 + j))
			*(str + i++) = (char)*(s1 + j++);
		j = 0;
		while (*(s2 + j))
			*(str + i++) = (char)*(s2 + j++);
		*(str + i) = 0;
	}
	return (str);
}
