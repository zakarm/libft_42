/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:50:43 by zmrabet           #+#    #+#             */
/*   Updated: 2023/02/07 16:25:18 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	srcc;
	unsigned char	*src;

	i = 0;
	src = (unsigned char *)str;
	srcc = c;
	while (i < n)
	{
		if (srcc == src[i])
			return (&src[i]);
		i++;
	}
	return (NULL);
}
