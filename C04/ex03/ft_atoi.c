/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:49:32 by aneves            #+#    #+#             */
/*   Updated: 2025/08/16 14:26:54 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	result;

	i = 0;
	neg = 0;
	result = 0;
	while (str[i] == '-' || str[i] == '+'
		|| (str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9')
		&& (!(str[i] >= 9 && str[i] <= 13) || str[i] == 32))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (neg % 2 == 0)
		return (+result);
	else
		return (-result);
	return (0);
}

/* #include <stdio.h>

int main(void)
{
	printf("%d", ft_atoi("-+- --+1234ab567"));
	printf("\n");
} */
