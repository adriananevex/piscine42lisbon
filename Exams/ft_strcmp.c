/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 15:11:34 by aneves            #+#    #+#             */
/*   Updated: 2025/08/21 15:22:30 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
    int i;
    int dif;

    i = 0;
    dif = 0;
    while (s1[i] || s2[i])
    {
        if (s1[i] == s2[i])
        {
            i++;
        }
        else
        {
            dif = s1[i] - s2[i];
            break;
        }
    }
    return (dif);
}

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