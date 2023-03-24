/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:20:46 by zmrabet           #+#    #+#             */
/*   Updated: 2023/02/07 17:08:59 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*swap;

	if (lst && del)
	{
		if (*lst)
		{
			while (*lst)
			{
				swap = (*lst)->next;
				ft_lstdelone(*lst, (*del));
				*lst = swap;
			}
		}
	}
}
