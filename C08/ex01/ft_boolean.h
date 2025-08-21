/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:14:32 by aneves            #+#    #+#             */
/*   Updated: 2025/08/20 22:53:46 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define SUCCESS    0
# define TRUE   1
# define FALSE  0
# define EVEN_MSG   "I have an even number of arguments.\n"
# define ODD_MSG    "I have an odd number of arguments.\n"

# define EVEN(nbr) (nbr % 2 == 0)

typedef int	t_bool;

#endif

/* #include "ft_boolean.h"
void ft_putstr(char *str)
{
while (*str)
write(1, str++, 1);
}
t_bool ft_is_even(int nbr)
{
return ((EVEN(nbr)) ? TRUE : FALSE);
}
int main(int argc, char **argv)
{
(void)argv;
if (ft_is_even(argc - 1) == TRUE)
ft_putstr(EVEN_MSG);
else
ft_putstr(ODD_MSG);
return (SUCCESS);
} */