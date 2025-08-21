/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:40:47 by aneves            #+#    #+#             */
/*   Updated: 2025/08/18 16:10:52 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	count;

	count = 0;
	if (nb > 1)
	{
		i = 2;
		while (i < nb)
		{
			if (nb % i == 0)
				count++;
			i++;
		}
		if (count == 0)
			return (nb);
	}
	nb = nb + 1;
	return (ft_find_next_prime(nb));
}

#include <stdio.h>

int main(void)
{
	int nb;

	nb = 2;
	printf("%d\n", ft_find_next_prime(nb));
	return (0);
}