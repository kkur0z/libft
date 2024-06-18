/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkurose <kkurose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:11:13 by kkurose           #+#    #+#             */
/*   Updated: 2024/05/04 22:11:36 by kkurose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (len == 0 || ft_strlen(s) < (size_t)start)
		return (str = ft_calloc(1, 1));
	else if (ft_strlen(s) - (size_t)start < len)
		len = ft_strlen(s) - (size_t)start;
	str = (char *)malloc((len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + (size_t)start, len + 1);
	return (str);
}
