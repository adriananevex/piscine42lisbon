/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 20:17:57 by aneves            #+#    #+#             */
/*   Updated: 2025/08/09 13:49:48 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (count == 0 || (!(str[count - 1] >= 48 && str[count - 1] <= 57)
				&& !(str[count - 1] >= 65 && str[count - 1] <= 90)
				&& !(str[count - 1] >= 97 && str[count - 1] <= 122)))
		{
			if (str[count] >= 97 && str[count] <= 122)
			{
				str[count] -= 32;
			}
		}
		else
		{
			if (str[count] >= 65 && str[count] <= 90)
			{
				str[count] += 32;
			}
		}
		count++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char str[] = "a 42ADRIANA neves vai PASSAR na piscinE";
	
	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
}
*/