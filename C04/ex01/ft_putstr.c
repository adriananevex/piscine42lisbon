/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 13:15:49 by aneves            #+#    #+#             */
/*   Updated: 2025/08/16 14:24:09 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

/* int main(int argc, char **argv)
{ 
	if (argc == 2)
	{
		ft_putstr(argv[1]);
		ft_putstr("\n");
	}
	return (0);
} */