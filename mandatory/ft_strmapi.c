/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:01:27 by zmrabet           #+#    #+#             */
/*   Updated: 2023/02/07 16:34:55 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*p;
	char	*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = (char *)s;
	p = (char *)malloc(ft_strlen(s) + 1);
	if (!p)
		return (NULL);
	while (str[i] != '\0')
	{
		p[i] = (*f)(i, str[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
