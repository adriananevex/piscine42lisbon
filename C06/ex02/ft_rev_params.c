/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 12:13:38 by aneves            #+#    #+#             */
/*   Updated: 2025/08/18 12:26:40 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = argc - 1;
	if (argc >= 2)
	{
		while (j >= 1)
		{
			while (argv[j][i])
			{
				write (1, &argv[j][i], 1);
				i++;
			}
			write (1, "\n", 1);
			i = 0;
			j--;
		}
	}
	return (0);
}
