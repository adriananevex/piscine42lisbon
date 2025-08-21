/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:25:09 by aneves            #+#    #+#             */
/*   Updated: 2025/08/20 15:03:37 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*s;
	int		i;
	
	if (src == NULL)
	{
		return (NULL);
	}
	s = malloc(ft_strlen(src) + 1);
	if (s != NULL)
	{
		i = 0;
		while (src[i])
		{
			s[i] = src[i];
			i++;
		}
		s[i] = '\0';
		return (s);
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