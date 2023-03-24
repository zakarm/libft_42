/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:38:15 by zmrabet           #+#    #+#             */
/*   Updated: 2023/02/07 17:09:06 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		i;
	int		s;
	t_list	*ls;

	ls = lst;
	i = 0;
	s = ft_lstsize(ls);
	while (ls)
	{
		if (i == s - 1)
			return (ls);
		ls = ls -> next;
		i++;
	}
	return (NULL);
}
