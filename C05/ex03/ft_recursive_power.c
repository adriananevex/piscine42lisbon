/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 18:50:36 by aneves            #+#    #+#             */
/*   Updated: 2025/08/12 19:26:08 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
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
	if (power >= 2)
	{
		result = nb * ft_recursive_power(nb, power - 1);
		return (result);
	}
	return (result);
}

/* #include <stdio.h>

int	main(void)
{
	int	nb;
	int power;
	
	nb = 2;
	power = 4;
	printf("%d\n", ft_recursive_power(nb, power));
	return (0);
} */
