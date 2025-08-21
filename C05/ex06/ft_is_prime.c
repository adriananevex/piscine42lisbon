/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 16:38:40 by aneves            #+#    #+#             */
/*   Updated: 2025/08/17 19:34:49 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	prime;
	int	count;

	prime = 0;
	if (nb > 1)
	{
		i = 2;
		count = 0;
		while (i < nb)
		{
			if (nb % i == 0)
			{
				count++;
			}
			i++;
		}
		if (count == 0)
		{
			prime = 1;
		}
	}
	return (prime);
}

#include <stdio.h>

int main(void)
{
	int nb;

	nb = 1;
	printf("%d\n", ft_is_prime(nb));
	return (0);
}