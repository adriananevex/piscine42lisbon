/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 14:55:14 by aneves            #+#    #+#             */
/*   Updated: 2025/08/14 15:15:54 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int repeat;
    
    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            repeat = 0;
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                repeat = argv[1][i] - 'a' + 1;
            }
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                repeat = argv[1][i] - 'A' + 1;
            }
            while (repeat > 0)
            {
                write(1, &argv[1][i], 1);
                repeat--;
            }
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}