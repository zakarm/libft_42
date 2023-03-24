/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:38:55 by zmrabet           #+#    #+#             */
/*   Updated: 2023/02/07 17:09:08 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ls;
	t_list	*head;

	head = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		ls = ft_lstnew((*f)(lst->content));
		if (!ls)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		ft_lstadd_back(&head, ls);
		lst = lst->next;
	}
	return (head);
}
