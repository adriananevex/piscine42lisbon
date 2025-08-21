/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 22:24:36 by aneves            #+#    #+#             */
/*   Updated: 2025/08/20 23:01:39 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int seen(char *str, char c, int pos)
{
    int i = 0;
    while (i < pos)
    {
        if (str[i] == c)
        {
            return (1);
        }
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc == 3)
    {
        i = 0;
        while (argv[1][i])
        {
            if(!seen(argv[1], argv[1][i], i))
            {
                write (1, &argv[1][i], 1);
            }
            i++;
        }
        j = 0;
        while (argv[2][j])
        {
            if (!seen(argv[2], argv[2][j], j) && !seen(argv[1], argv[2][j], i))
            {
                write (1, &argv[2][j], 1);
            }
            j++;
        }
    }
    write (1, "\n", 1);
    return (0);
}