/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:41:54 by aneves            #+#    #+#             */
/*   Updated: 2025/08/03 20:47:03 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)

{
	int	count;
	int	temp;

	count = 0;
	while (count < size - 1)
	{
		temp = tab[count];
		tab[count] = tab[size -1];
		tab[size -1] = temp;
		count++;
		size--;
	}
}
