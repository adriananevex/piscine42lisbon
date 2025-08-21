/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:34:37 by aneves            #+#    #+#             */
/*   Updated: 2025/08/14 11:09:55 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/* #include <stdio.h>

int main (void)
{
	char    c[] = "Adriana Elisa dos Reis Alves das Neves";
	int     len;
	
	len = ft_strlen(c);
	printf("%d\n", len);
	
} */