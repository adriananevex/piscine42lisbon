/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 23:20:24 by aneves            #+#    #+#             */
/*   Updated: 2025/08/13 19:39:52 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;
	int				dif;

	count = 0;
	dif = 0;
	if (n <= 0)
	{
		return (0);
	}
	while ((s1[count] != '\0' || s2[count] != '\0') && (count < n))
	{
		if (s1[count] == s2[count])
		{
			count++;
		}
		else if (s1[count] != s2[count])
		{
			dif = s1[count] - s2[count];
			return (dif);
			break ;
		}
	}
	return (dif);
}

/* #include <stdio.h>

int	main(void)
{
	char s1[] = "Adriana Elisa";
	char s2[] = "Adriana Elisa Reis Alves";
	unsigned int	n;

	n = 10;
	
	printf("%s\n%s\n", s1, s2);
	ft_strncmp(s1, s2, n);
	printf("%d\n", ft_strncmp(s1, s2, n));
} */