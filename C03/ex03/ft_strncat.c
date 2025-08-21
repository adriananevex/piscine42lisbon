/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 18:41:29 by aneves            #+#    #+#             */
/*   Updated: 2025/08/10 14:52:12 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				size_dest;

	i = 0;
	size_dest = 0;
	while (dest[size_dest])
	{
		size_dest++;
	}
	while (src[i] && i < nb)
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
	ft_strncat(s1, s2, 2);
	printf("%s\n", s1);
	return (0);
} */