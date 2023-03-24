/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:44:35 by zmrabet           #+#    #+#             */
/*   Updated: 2023/02/07 16:34:17 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dstn;
	char	*srcn;

	dstn = (char *)dst;
	srcn = (char *)src;
	i = 0;
	if (!dstn && !srcn)
		return (NULL);
	if (srcn < dstn)
	{
		while (len-- > 0)
			dstn[len] = srcn[len];
	}
	else
	{
		while (i < len)
		{
			dstn[i] = srcn[i];
			i++;
		}
	}
	return (dst);
}
