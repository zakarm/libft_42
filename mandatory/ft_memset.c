/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:26:35 by zmrabet           #+#    #+#             */
/*   Updated: 2023/02/07 16:34:20 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *remp, int value, size_t count)
{
	unsigned char	*p;

	p = (unsigned char *)remp;
	while (count > 0)
	{
		*p = (unsigned char)value;
		p++;
		count--;
	}
	return (remp);
}
