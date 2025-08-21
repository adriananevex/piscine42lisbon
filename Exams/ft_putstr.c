/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 18:51:03 by aneves            #+#    #+#             */
/*   Updated: 2025/08/14 19:04:44 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *src)
{
    while (*src)
    {
        write(1, src, 1);
        src++;
    }
    write(1, "\n", 1);
}

/* void    ft_putstr(char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        write(1, &src[i], 1);
        i++;
    }
    write(1, "\n", 1);
}
 */

int main(void)
{
    char src[] = "Lisboa";
    
    ft_putstr(src);
}
