/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 21:41:26 by aneves            #+#    #+#             */
/*   Updated: 2025/08/04 11:06:17 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	swap;
	int	count;

	while (1)
	{
		count = 0;
		swap = 0;
		while (count < size -1)
		{
			if (tab[count] > tab[count + 1])
			{
				temp = tab[count + 1];
				tab[count + 1] = tab[count];
				tab[count] = temp;
				swap = 1;
			}
			count++;
		}
		if (swap == 0)
		{
			break ;
		}
	}
}
