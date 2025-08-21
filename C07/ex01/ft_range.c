/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 17:12:02 by aneves            #+#    #+#             */
/*   Updated: 2025/08/18 12:57:30 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*num;
	int	size;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	num = malloc(size * sizeof(int));
	if (num == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		num[i] = min + i;
		i++;
	}
	return (num);
}

/* #include <stdio.h>

int main(void)
{
	int min;
	int max;
	int i;
	int size;
	int *num;
	
	min = 2;
	max = 10;
	num = ft_range(min, max);
	size = max - min;
	i = 0;
	while (i < size)
	{
		printf ("%d ", num[i]);
		i++;
	}
	printf ("\n");
	free(num);
	return (0);
} */
