/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkurose <kkurose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:09:47 by kkurose           #+#    #+#             */
/*   Updated: 2024/04/28 13:25:44 by kkurose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_lst;
	void	*n_content;
	t_list	*node;

	n_lst = NULL;
	while (lst)
	{
		n_content = (f)(lst->content);
		if (!n_content)
		{
			ft_lstclear(&n_lst, del);
			return (NULL);
		}
		node = ft_lstnew(n_content);
		if (!node)
		{
			(del)(n_content);
			ft_lstclear(&n_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&n_lst, node);
		lst = lst->next;
	}
	return (n_lst);
}
