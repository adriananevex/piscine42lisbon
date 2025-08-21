/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:07:57 by aneves            #+#    #+#             */
/*   Updated: 2025/08/12 18:03:22 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fac;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	if (nb > 0)
	{
		fac = nb * ft_recursive_factorial(nb - 1);
		return (fac);
	}
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	int	n;
	
	n = 3;
	printf("%d\n", ft_recursive_factorial(n));
	return (0);
} */
