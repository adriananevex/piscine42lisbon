/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:01:44 by aneves            #+#    #+#             */
/*   Updated: 2025/08/09 12:39:25 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char dest[] = "Adriana Neves";
	char src[] = "Adriana";
	unsigned int	n = 14;

	printf("%s\n", dest);
	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}
*/