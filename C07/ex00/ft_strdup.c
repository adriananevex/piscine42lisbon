/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 16:37:07 by aneves            #+#    #+#             */
/*   Updated: 2025/08/20 15:01:03 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	if (src == NULL)
	{
		return (NULL);
	}
	copy = malloc(ft_strlen(src) + 1);
	if (copy != NULL)
	{
		i = 0;
		while (src[i])
		{
			copy[i] = src[i];
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
	return (NULL);
}

#include <unistd.h>

int main(void)
{
	char c[] = "Adriana";
	char *copy;
	
	copy = ft_strdup(c);
	write (1, copy, ft_strlen(copy));
	write (1, "\n", 1);
	free(copy);
	return (0);
}