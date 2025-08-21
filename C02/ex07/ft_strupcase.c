/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:35:49 by aneves            #+#    #+#             */
/*   Updated: 2025/08/09 15:04:42 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 97 && str[count] <= 122)
		{
			str[count] = str[count] - 32;
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
	ft_strupcase(str);
	printf("%s\n", str);
}
*/