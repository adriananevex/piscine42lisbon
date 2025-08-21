/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 17:02:57 by aneves            #+#    #+#             */
/*   Updated: 2025/08/02 17:25:28 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_num(int num)
{
	char	a;
	char	b;

	a = (num / 10) + '0';
	b = (num % 10) + '0';
	ft_putchar(a);
	ft_putchar(b);
}

void	ft_print_comb2(void)
{
	int	comba;
	int	combb;

	comba = 0;
	while (comba <= 98)
	{
		combb = comba + 1;
		while (combb <= 99)
		{
			ft_print_num(comba);
			ft_putchar(' ');
			ft_print_num(combb);
			if (comba != 98 || combb != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			combb++;
		}
		comba++;
	}
}
