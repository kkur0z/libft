/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkurose <kkurose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:31:53 by kkurose           #+#    #+#             */
/*   Updated: 2024/05/04 22:26:00 by kkurose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;

	if (count == 0 && size == 0)
	{
		count = 1;
		size = 1;
	}
	else if (count == 0 || size == 0)
		return (NULL);
	if (size > SIZE_MAX / count)
		return (NULL);
	array = (void *)malloc(count * size);
	if (!array)
		return (NULL);
	ft_bzero(array, (count * size));
	return (array);
}
