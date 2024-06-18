/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkurose <kkurose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:11:09 by kkurose           #+#    #+#             */
/*   Updated: 2024/05/02 13:42:29 by kkurose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_chrset(const char c, const char *chrset)
{
	int	i;

	i = 0;
	while (chrset[i])
	{
		if (c == chrset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && is_in_chrset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in_chrset(s1[end - 1], set))
		end--;
	res = (char *)malloc(end - start + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (start < end)
		res[i++] = s1[start++];
	res[i] = 0;
	return (res);
}
