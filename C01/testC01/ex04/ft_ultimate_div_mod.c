/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 18:34:52 by aneves            #+#    #+#             */
/*   Updated: 2025/08/04 15:21:40 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	temp_a;
	int	temp_b;

	temp_a = *a;
	temp_b = *b;
	*b = temp_a % temp_b;
	*a = temp_a / temp_b;
}
