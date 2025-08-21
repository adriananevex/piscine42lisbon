/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 20:05:36 by aneves            #+#    #+#             */
/*   Updated: 2025/08/19 20:55:55 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr(int nb)
{
    char    num;
    long    n;
    
    n = nb;
    if (n < 0)
    {
        write (1, "-", 1);
        n = -n;
    }
    if (n >= 10)
    {
        ft_putnbr(n / 10);
    }
    num = (n % 10) + '0';
    write (1, &num, 1);
}

int main(void)
{
    int i;
    
    i = 345;
    ft_putnbr(i);
    write (1, "\n", 1);
    return (0);
}
