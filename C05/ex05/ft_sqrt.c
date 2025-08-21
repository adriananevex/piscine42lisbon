/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 20:42:49 by aneves            #+#    #+#             */
/*   Updated: 2025/08/17 19:31:37 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
	{
		i = 0;
	}
	if (nb == 1)
	{
		i = nb;
	}
	if (nb > 1)
	{
		while ((i * i) != nb && i != nb)
		{
			i++;
		}
		if (i == nb || nb % i != 0)
		{
			i = 0;
		}
	}
	return (i);
}

#include <stdio.h>

int main(void)
{
	int nb;

	nb = 24;
	printf("%d\n", ft_sqrt(nb));
	return (0);
}