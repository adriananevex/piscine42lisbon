/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:43:40 by aneves            #+#    #+#             */
/*   Updated: 2025/08/09 13:25:56 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] >= 97 && str[count] <= 122))
		{
			return (0);
			break ;
		}
		count++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	int n;
	char str[] = "adriana";

	printf("%s\n", str);
	n = ft_str_is_lowercase(str);
	printf("%d\n", n);
}
*/