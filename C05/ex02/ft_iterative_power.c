/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 18:07:14 by aneves            #+#    #+#             */
/*   Updated: 2025/08/17 19:16:45 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
	{
		return (0);
	}
	if ((power == 0 && nb == 0) || power == 0)
	{
		return (1);
	}
	while (power >= 2)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	int	nb;
	int p;
	
	nb = 2;
	p = 4;
	printf("%d\n", ft_iterative_power(nb, p));
	return (0);
}