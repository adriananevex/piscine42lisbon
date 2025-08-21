/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:42:01 by aneves            #+#    #+#             */
/*   Updated: 2025/08/20 22:53:37 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) (Value < 0 ? -Value : Value)

#endif

/* MAIN
#include "ft_abs.h"
#include <stdio.h>

int main(void)
{
	int Value = -20;
	printf("%d\n", ABS(Value));
} */