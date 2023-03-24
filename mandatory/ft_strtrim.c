/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:22:02 by zmrabet           #+#    #+#             */
/*   Updated: 2023/03/24 14:42:00 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	getfrontindex(char const *s1, char const *set)
{
	int	i;
	int	seti;

	i = 0;
	seti = 0;
	while (s1[i] != '\0')
	{
		seti = 0;
		while (set[seti] != '\0')
		{
			if (s1[i] == set[seti])
			{
				break ;
			}
			seti++;
		}
		if (seti == (int)ft_strlen(set))
			break ;
		i++;
	}
	return (i);
}

static int	getbackindex(char const *s1, char const *set)
{
	int	i;
	int	seti;

	i = ft_strlen(s1) - 1;
	seti = 0;
	while (i >= 0)
	{
		seti = 0;
		while (set[seti] != '\0')
		{
			if (s1[i] == set[seti])
			{
				break ;
			}
			seti++;
		}
		if (seti == (int)ft_strlen(set))
			break ;
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*p;
	int		k;

	if (!s1 || !set)
		return (NULL);
	i = getfrontindex(s1, set);
	j = getbackindex(s1, set);
	if ((j - i) < 0)
		return (ft_strdup(""));
	k = 0;
	if (i == 0 && j == 0)
		return (ft_strdup(s1));
	p = (char *)malloc(sizeof(*s1) * (j - i) + 2);
	if (!p)
		return (NULL);
	while (s1[i] != '\0' && i <= j)
	{
		p[k++] = s1[i++];
	}
	p[k] = '\0';
	return (p);
}
