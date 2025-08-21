/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:44:52 by aneves            #+#    #+#             */
/*   Updated: 2025/08/20 22:53:10 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

#include <stdio.h>

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

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	if (src == NULL)
	{
		return (NULL);
	}
	copy = malloc(ft_strlen(src) + 1);
	if (copy != NULL)
	{
		i = 0;
		while (src[i])
		{
			copy[i] = src[i];
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
	return (NULL);
}

struct	s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	struct s_stock_str	*list;
	int					i;

	list = malloc(sizeof(t_stock_str) * (argc + 1));
	if (list == NULL)
		return (NULL);
	i = 0;
	while (i < argc)
	{
		if (argv[i] == NULL)
		{
			return (NULL);
		}
		list[i].size = ft_strlen(argv[i]);
		list[i].str = ft_strdup(argv[i]);
		list[i].copy = ft_strdup(argv[i]);
		if (list[i].str == NULL || list[i].copy == NULL)
			return (NULL);
		i++;
	}
	list[i].str = NULL;
	return (list);
}

void	print_array(t_stock_str *str)
{
	int	i;

	i = 0;
	while (str[i].str != NULL)
	{
		printf("ID: %d | Size: %d | String: %s
			| Copy: %s\n", i, str[i].size, str[i].str, str[i].copy);
		i++;
	}
	free(str);
}

/* int main(int argc, char **argv)
{
	print_array(ft_strs_to_tab(argc, argv));
} */