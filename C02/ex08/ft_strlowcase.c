/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 19:38:55 by aneves            #+#    #+#             */
/*   Updated: 2025/08/09 13:47:57 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 65 && str[count] <= 90)
		{
			str[count] = str[count] + 32;
		}
		count++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char str[] = "ADRIneves";
	
	printf("%s\n", str);
	ft_strlowcase(str);
	printf("%s\n", str);
}
*/