/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:06:13 by aneves            #+#    #+#             */
/*   Updated: 2025/08/09 13:19:37 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] >= 'A' && str[count] <= 'Z'))
		{
			if (!(str[count] >= 'a' && str[count] <= 'z'))
			{
				return (0);
				break ;
			}
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
	char str[] = "Adriana";

	printf("%s\n", str);
	n = ft_str_is_alpha(str);
	printf("%d\n", n);
}
*/