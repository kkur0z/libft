/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkurose <kkurose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:13:28 by kkurose           #+#    #+#             */
/*   Updated: 2024/05/04 22:24:27 by kkurose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	size(int n)
{
	size_t	i;

	i = 1;
	if (n < 0)
		i++;
	n /= 10;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static int	ft_abs(int n)
{
	if (n == -2147483648)
		return (8);
	else if (n < 0)
		return (-n);
	return (n);
}

static void	ft_strrev(char *str)
{
	size_t	i;
	size_t	len;
	char	tmp;

	i = 0;
	len = ft_strlen(str);
	while (i < (len / 2))
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	int		is_neg;

	is_neg = 0;
	if (n < 0)
		is_neg = 1;
	str = (char *)ft_calloc(size(n) + 1, 1);
	if (!str)
		return (NULL);
	if (!n)
		str[0] = '0';
	i = 0;
	while (n != 0)
	{
		str[i++] = '0' + (ft_abs(n) % 10);
		n /= 10;
	}
	if (is_neg)
		str[i++] = '-';
	ft_strrev(str);
	str[++i] = 0;
	return (str);
}
