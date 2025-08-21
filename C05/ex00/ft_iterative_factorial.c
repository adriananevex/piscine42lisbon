/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:53:47 by aneves            #+#    #+#             */
/*   Updated: 2025/08/12 16:07:21 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;
	int	n;

	fac = 1;
	n = 1;
	if (nb >= 0)
	{
		while (n < nb)
		{
			fac = fac * (n + 1);
			n++;
		}
		return (fac);
	}
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	int	n;
	
	n = 20;
	printf("%d\n", ft_iterative_factorial(n));
	return (0);
} */