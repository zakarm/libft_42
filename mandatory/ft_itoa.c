/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:16:56 by zmrabet           #+#    #+#             */
/*   Updated: 2023/02/07 16:25:15 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_numbers(long n)
{
	long	res;
	int		i;

	res = n;
	i = 0;
	if (res <= 0)
	{
		res *= -1;
		i++;
	}
	while (res > 0)
	{
		i++;
		res /= 10;
	}
	return (i);
}

static char	leeszero(long *nb)
{
	*nb *= -1;
	return ('-');
}

char	*ft_itoa(int n)
{
	char	*p;
	int		k;
	long	nb;

	nb = n;
	k = ft_numbers(n);
	p = (char *)malloc(sizeof(char) * (k + 1));
	if (!p)
		return (NULL);
	p[k--] = '\0';
	if (nb < 0)
	{
		p[0] = leeszero(&nb);
	}
	if (nb < 9 || nb == 0)
		p[k--] = nb + 48;
	else
	{
		while (nb > 0)
		{
			p[k--] = (nb % 10) + 48;
			nb /= 10;
		}
	}
	return (p);
}
