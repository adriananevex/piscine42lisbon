/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:04:58 by aneves            #+#    #+#             */
/*   Updated: 2025/08/10 14:51:43 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size_dest;

	i = 0;
	size_dest = 0;
	while (dest[size_dest])
	{
		size_dest++;
	}
	while (src[i])
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char s1[50] = "Adriana Elisa ";
	char s2[] = "Neves";

	printf("%s\n%s\n", s1, s2);
	ft_strcat(s1, s2);
	printf("%s\n", s1);
} */