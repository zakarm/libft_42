/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:19:11 by zmrabet           #+#    #+#             */
/*   Updated: 2023/02/07 16:34:43 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*sone;
	char	*stwo;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	sone = (char *)s1;
	stwo = (char *)s2;
	i = 0;
	j = 0;
	p = (char *)malloc((ft_strlen(sone) + ft_strlen(stwo)) + 1);
	if (p == NULL)
		return (NULL);
	while (sone[i] != '\0')
	{
		p[i] = sone[i];
		i++;
	}
	while (stwo[j] != '\0')
		p[i++] = stwo[j++];
	p[i] = '\0';
	return (p);
}
