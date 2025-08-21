/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:40:25 by aneves            #+#    #+#             */
/*   Updated: 2025/08/20 20:32:53 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    int k;
    char    found;
    
    if (argc == 3)
    {
        i = 0;
        while (argv[1][i])
        {
            k = 0;
            found = 0;
            while (k < i)
            {
                if (argv[1][k] == argv[1][i])
                {
                    found = 1;
                    break;
                }
                k++;
            }
            if (found == 0)
            {
                j = 0;
                while (argv[2][j])
                {
                    if (argv[1][i] == argv[2][j])
                    {
                        write (1, &argv[1][i], 1);
                        break;
                    }
                    j++;
                }
            }
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}
