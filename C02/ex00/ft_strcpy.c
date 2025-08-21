/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:23:17 by aneves            #+#    #+#             */
/*   Updated: 2025/08/09 12:27:20 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char dest[] = "Adriana";
	char src[] = "Smart Adriana";

	printf("%s\n", dest);
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}
*/