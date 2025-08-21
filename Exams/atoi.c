/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 21:24:00 by aneves            #+#    #+#             */
/*   Updated: 2025/08/19 21:30:17 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    int i;
    int neg;
    int result;
    
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        {
            neg++;
        }
        i++;
    }
    while (str[i] >= '0' & str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0')
        i++;
    }
    if (neg % 2 != 0)
    {
        result = -result;
    }
    return (result);
}