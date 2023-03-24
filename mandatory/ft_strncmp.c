/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:41:00 by zmrabet           #+#    #+#             */
/*   Updated: 2023/02/07 16:35:00 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*sone;
	unsigned char	*stwo;

	sone = (unsigned char *)s1;
	stwo = (unsigned char *)s2;
	i = 0;
	while ((sone[i] != '\0' || stwo[i] != '\0') && i < n)
	{
		if (sone[i] > stwo[i])
			return (1);
		else if (sone[i] < stwo[i])
			return (-1);
		i++;
	}
	return (0);
}
