/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:15:39 by zmrabet           #+#    #+#             */
/*   Updated: 2023/02/07 16:34:36 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*st;
	char	data;

	st = (char *)s;
	data = (char)c;
	while (*st != data)
	{
		if (*st == '\0')
			return (NULL);
		st++;
	}
	return (st);
}
