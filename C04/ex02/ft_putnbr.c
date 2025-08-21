/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:36:27 by aneves            #+#    #+#             */
/*   Updated: 2025/08/16 14:11:11 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	num;
	long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	num = (n % 10) + '0';
	write (1, &num, 1);
}

/* int main(void)
{
	int nb;
	
	nb = 123;
	ft_putnbr(nb);
	write(1, "\n", 1);
	return (0);
} */