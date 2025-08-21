/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:01:52 by aneves            #+#    #+#             */
/*   Updated: 2025/08/09 15:08:34 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	count;
	int	upper;

	count = 0;
	upper = 1;
	while (str[count] != '\0')
	{
		if (!(str[count] >= 65 && str[count] <= 90))
		{
			upper = 0;
			break ;
		}
		count++;
	}
	return (upper);
}

/*
#include <stdio.h>

int	main(void)
{
	int n;
	char str[] = "ADRIANA";

	printf("%s\n", str);
	n = ft_str_is_uppercase(str);
	printf("%d\n", n);
}
*/