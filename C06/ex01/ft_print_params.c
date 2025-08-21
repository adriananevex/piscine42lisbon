/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 11:20:07 by aneves            #+#    #+#             */
/*   Updated: 2025/08/16 20:24:26 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc >= 2)
	{
		while (i < argc)
		{
			write(1, argv[i], ft_strlen(argv[i]));
			write (1, "\n", 1);
			i++;
		}
	}
	return (0);
}
