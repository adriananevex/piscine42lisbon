/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 15:13:45 by aneves            #+#    #+#             */
/*   Updated: 2025/08/18 12:28:00 by aneves           ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	dif;

	i = 0;
	dif = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			dif = s1[i] - s2[i];
			break ;
		}
	}
	return (dif);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	if (argc >= 2)
	{
		while (i < argc)
		{
			j = i + 1;
			while (j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
					ft_swap(&argv[i], &argv[j]);
				j++;
			}
			write (1, argv[i], ft_strlen(argv[i]));
			write (1, "\n", 1);
			i++;
		}
	}
	return (0);
}
