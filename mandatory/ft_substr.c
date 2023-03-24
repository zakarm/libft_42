/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:29:01 by zmrabet           #+#    #+#             */
/*   Updated: 2023/02/08 14:53:28 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	k;
	char	*str;
	char	*p;

	i = start;
	k = 0;
	if (!s)
		return (NULL);
	str = (char *)s;
	if (ft_strlen(str) < len)
		len = ft_strlen(str);
	if (ft_strlen(str + start) < len)
		len = ft_strlen(str + start);
	p = (char *)malloc(sizeof(*s) * (len + 1));
	if (!p)
		return (NULL);
	while (i < ft_strlen(str) && k < len)
	{
		p[k] = s[i];
		k++;
		i++;
	}
	p[k] = '\0';
	return (p);
}
