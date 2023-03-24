/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:22:41 by zmrabet           #+#    #+#             */
/*   Updated: 2023/02/13 12:30:31 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//words count in string
static int	ft_motslen(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

static char	*ft_free(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

//len of words without separator
static int	ft_strlen_sep(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

//split one word
static char	*ft_splitmot(char **pp, char *str, char c)
{
	int		len;
	int		i;
	char	*s;

	i = 0;
	len = ft_strlen_sep(str, c);
	while (str[len] && str[len] != c)
		len++;
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (ft_free(pp));
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

//split word by word and copy them in pp
char	**ft_split(char const *s, char c)
{
	char	**pp;
	int		i;
	int		index;

	index = 0;
	i = 0;
	if (!s)
		return (NULL);
	pp = (char **)malloc(sizeof(char *) * (ft_motslen((char *)s, c) + 1));
	if (!pp)
		return (NULL);
	while (s[index])
	{
		while (s[index] && s[index] == c)
			index++;
		if (s[index])
		{
			pp[i] = ft_splitmot(pp, (char *)&s[index], c);
			i++;
		}
		while (s[index] && s[index] != c)
			index++;
	}
	pp[i] = NULL;
	return (pp);
}
