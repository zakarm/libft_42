/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:53:24 by zmrabet           #+#    #+#             */
/*   Updated: 2023/02/07 16:34:46 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	ld;
	size_t	ls;

	ls = ft_strlen(src);
	if (dstsize == 0 && !dst)
		return (ls);
	i = ft_strlen(dst);
	ld = ft_strlen(dst);
	j = 0;
	if (dstsize == 0 || dstsize <= ld)
		return (ls + dstsize);
	while (src[j] != '\0' && i < dstsize - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (ld + ls);
}
