/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 19:00:41 by aneves            #+#    #+#             */
/*   Updated: 2025/08/14 19:16:37 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void    ft_swap(int *a, int *b)
{
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a;
    int b;

    a = 10;
    b = 20;
    ft_swap(&a, &b);
    printf("a: %d | b: %d\n", a, b);
}