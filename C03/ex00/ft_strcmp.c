/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 20:35:34 by aneves            #+#    #+#             */
/*   Updated: 2025/08/10 14:50:55 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;
	int	dif;

	count = 0;
	dif = 0;
	while (s1[count] != '\0' || s2[count] != '\0')
	{
		if (s1[count] == s2[count])
		{
			count++;
		}
		else
		{
			dif = s1[count] - s2[count];
			break ;
		}
	}
	return (dif);
}

/*
#include <stdio.h>

int	main(void)
{
	char s1[] = "Adriana";
	char s2[] = "Adriano";
	int	n;
	
	printf("%s\n%s\n", s1, s2);
	n = ft_strcmp(s1, s2);
	printf("%d\n", n);
}
*/