/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 14:03:11 by aneves            #+#    #+#             */
/*   Updated: 2025/08/14 14:40:40 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    
    i = 0;
    if (argc >=2)
    {
        while (argv[argc - 1][i])
        {
            write (1, &argv[argc - 1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}