/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:28:15 by aneves            #+#    #+#             */
/*   Updated: 2025/08/09 14:57:29 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len_src;
	unsigned int	i;

	len_src = 0;
	while (src[len_src] != '\0')
	{
		len_src++;
	}
	if (size > 0)
	{
		i = 0;
		while (i < size -1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len_src);
}

/*
#include <stdio.h>

int	main(void)
{
	char dest[20] = "Neves";
	char src[] = "Smart Adriana";
	unsigned int	n = 9;

	printf("%s\n", dest);
	ft_strlcpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}
*/