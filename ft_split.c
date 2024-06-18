/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkurose <kkurose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:10:38 by kkurose           #+#    #+#             */
/*   Updated: 2024/05/04 22:21:13 by kkurose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordlen(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static size_t	word_count(char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((s[i] != c) && (s[i + 1] == c || !s[i + 1]))
			count++;
		i++;
	}
	return (count);
}

static char	*ft_word(char *s, char c)
{
	size_t	wordlen;
	size_t	i;
	char	*word;

	i = 0;
	wordlen = ft_wordlen(s, c);
	word = (char *)malloc(sizeof(char) * (wordlen + 1));
	if (word == NULL)
		return (NULL);
	while (i < wordlen)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

static char	**free_strs(char **strs, size_t i)
{
	while (i-- > 0)
		free(strs[i]);
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;

	i = 0;
	strs = malloc(sizeof(char *) * (word_count((char *)s, c) + 1));
	if (!strs)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			strs[i] = ft_word((char *)s, c);
			if (!strs[i])
				return (free_strs(strs, i));
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	strs[i] = 0;
	return (strs);
}
