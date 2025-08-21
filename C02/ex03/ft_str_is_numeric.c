/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:55:54 by aneves            #+#    #+#             */
/*   Updated: 2025/08/09 15:08:26 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	count;
	int	num;

	count = 0;
	num = 1;
	while (str[count] != '\0')
	{
		if (!(str[count] >= '0' && str[count] <= '9'))
		{
			num = 0;
			break ;
		}
		count++;
	}
	return (num);
}

/*
#include <stdio.h>

int	main(void)
{
	int n;
	char str[] = "123456";

	printf("%s\n", str);
	n = ft_str_is_numeric(str);
	printf("%d\n", n);
}
*/