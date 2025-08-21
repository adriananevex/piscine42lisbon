/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 18:21:09 by aneves            #+#    #+#             */
/*   Updated: 2025/08/13 20:29:29 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	final_dest;
	unsigned int	size_src;

	i = 0;
	final_dest = 0;
	while (dest[final_dest])
		final_dest++;
	size_src = 0;
	while (src[size_src])
		size_src++;
	if (final_dest >= size)
	{
		return (final_dest + size_src);
	}
	while (src[i] && (size > final_dest && i < size - final_dest - 1))
	{
		dest[final_dest + i] = src[i];
		i++;
	}
	dest[final_dest + i] = '\0';
	return (final_dest + size_src);
}

#include <stdio.h>

int main(void)
{
	unsigned int	n = 16;
	char s1[] = "Adriana Elisa ";
	char s2[] = "Neves";
	
	printf("%s\n%s\n", s1, s2);
	ft_strlcat(s1, s2, n);
	printf("%s\n", s1);
}
