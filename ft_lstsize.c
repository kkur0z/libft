/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkurose <kkurose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:09:56 by kkurose           #+#    #+#             */
/*   Updated: 2024/05/04 22:09:14 by kkurose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*ptr;

	i = 0;
	ptr = lst;
	if (ptr == NULL)
		return (0);
	while (ptr->next)
	{
		i++;
		ptr = ptr->next;
	}
	return (++i);
}
