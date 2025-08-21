/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:19:00 by aneves            #+#    #+#             */
/*   Updated: 2025/08/10 13:42:15 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 32 && str[count] <= 126)
		{
			count++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/* #include <stdio.h>

int	main(void)
{
	int n;
	char str[] = "\n\t\v\f Adriana";

	printf("%s\n", str);
	n = ft_str_is_printable(str);
	printf("%d\n", n);
}
 */