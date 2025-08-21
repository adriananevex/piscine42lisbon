/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 20:50:58 by aneves            #+#    #+#             */
/*   Updated: 2025/08/19 20:35:34 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_n(int number)
{
    if (number >= 10)
    {
        ft_print_n(number / 10);
    }
    number = number % 10 + '0';
    write (1, &number, 1);
}

int main(void)
{
    int number;

    number = 1;
    while (number <= 100)
    {
        if (number % 3 == 0 && number % 5 == 0)
        {
            write (1, "fizzbuzz", 8);
        }
        else if (number % 3 == 0)
        {
        write (1, "fizz", 4);
        }
        else if (number % 5 == 0)
        {
            write (1, "buzz", 4);
        }
        else
        {
            ft_print_n(number);
        }
        write (1, "\n", 1);
        number++;
    }
}