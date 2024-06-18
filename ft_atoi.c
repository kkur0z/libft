/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkurose <kkurose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:13:24 by kkurose           #+#    #+#             */
/*   Updated: 2024/05/04 22:26:19 by kkurose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == ' ' || c == '\r')
		return (1);
	return (0);
}

static int	check_of_uf(long *n, int last, int *sign)
{
	if (*sign == -1 && ((*n > LONG_MAX / 10)
			|| (*n == LONG_MAX / 10 && last >= 8)))
		return (-1);
	else if (*sign && ((*n > LONG_MAX / 10)
			|| (*n == LONG_MAX / 10 && last >= 8)))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	n;
	int		sign;

	i = 0;
	n = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		if (check_of_uf(&n, str[i] - '0', &sign) == 1)
			return ((int)LONG_MAX);
		else if (check_of_uf(&n, str[i] - '0', &sign) == -1)
			return ((int)LONG_MIN);
		n = 10 * n + (str[i++] - '0');
	}
	return ((int)n * sign);
}
