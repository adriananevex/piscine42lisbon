/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 14:55:27 by aneves            #+#    #+#             */
/*   Updated: 2025/08/13 14:00:57 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	d;

	i = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		d = 0;
		while (str[i + d] && to_find[d] && str[i + d] == to_find[d])
		{
			d++;
			if (to_find[d] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>

int	main(void)
{
	char str[] = "Adriana Neves";
	char to_find[] = "eves";
	char	*result = ft_strstr(str, to_find);

	printf("%s\n%s\n\n", str, to_find);
	printf("%s\n", result);
} */