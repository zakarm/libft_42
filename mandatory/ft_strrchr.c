/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:14:19 by zmrabet           #+#    #+#             */
/*   Updated: 2023/02/07 16:35:06 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*st;
	char	data;
	int		i;

	st = (char *)s;
	data = (char)c;
	i = ft_strlen(st);
	while (0 <= i)
	{
		if (st[i] == data)
			return (&st[i]);
		i--;
	}
	return (0);
}
