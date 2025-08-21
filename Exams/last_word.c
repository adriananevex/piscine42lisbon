/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 19:45:26 by aneves            #+#    #+#             */
/*   Updated: 2025/08/14 21:00:23 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

int main(int argc, char **argv)
{
    int i;

    if (argc == 2)
    {
        i = ft_strlen(argv[1]) - 1;
        while (((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32) && i >= 0)
        {
            i--;
        }
        while (!((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32) && i >= 0)
        {
            i--;
        }
        while ((argv[1][++i]) ||(((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32) && i >= 0))
        {
            write (1, &argv[1][i], 1);
        }
    }
    write (1, "\n", 1);
    return (0);
}