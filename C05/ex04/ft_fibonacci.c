/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 19:32:12 by aneves            #+#    #+#             */
/*   Updated: 2025/08/17 19:21:20 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	f;

	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1 || index == 2)
	{
		return (1);
	}
	else
	{
		f = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (f);
	}
}

#include <stdio.h>

int main(void)
{
	int index;

	index = 6;
	printf("%d\n", ft_fibonacci(index));
	return (0);
}