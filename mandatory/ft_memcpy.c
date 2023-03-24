/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:22:05 by zmrabet           #+#    #+#             */
/*   Updated: 2023/02/07 16:25:23 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *des, const void *src, size_t n)
{
	char	*dest;
	char	*srcs;

	dest = (char *)des;
	srcs = (char *)src;
	if (!dest && !srcs)
		return (NULL);
	while (n > 0)
	{
		*dest++ = *srcs++;
		n--;
	}
	return (des);
}
