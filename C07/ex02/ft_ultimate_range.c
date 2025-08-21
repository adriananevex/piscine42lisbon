/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 18:12:24 by aneves            #+#    #+#             */
/*   Updated: 2025/08/18 13:30:52 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*num;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	num = malloc(size * sizeof(int));
	if (num == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		num[i] = min + i;
		i++;
	}
	*range = num;
	return (size);
}

/* #include <stdio.h>

int main(void)
{
	int min;
	int max;
	int i;
	int	size;
	int *num;

	min = 2;
	max = 9;
	size = ft_ultimate_range(&num, min, max);
	i = 0;
	while (i < size)
	{
		printf ("%d ", num[i]);
		i++;
	}
	printf ("\n%d\n", size);
	free(num);
	return (0);
} */
