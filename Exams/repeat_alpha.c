/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 18:58:22 by aneves            #+#    #+#             */
/*   Updated: 2025/08/07 19:38:19 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int letter_count(char c)
{
	int repeat;
	
	if (c >= 'A' && c <= 'Z')
	{
		repeat = c - 'A' + 1;
	}
	else if (c >= 'a' && c <= 'z')
	{
		repeat = c - 'a' + 1;
	}
	else
	{
		repeat = 1;
	}
	return (repeat);
}

int main(int argc, char **argv)
{
	int repeat;

	if (argc == 2)
	{
		while (*argv[1])
		{
			repeat = letter_count(*argv[1]);
			while (repeat--)
			{
				write(1, argv[1], 1);
			}
			argv[1]++;
		}
	}
	write(1, "\n", 1);
}


#include <unistd.h>

int	letter_count(char c)
{
	int repeat;

	if (c >= 'A' && c <= 'Z')
	{
		repeat = c - 'A' + 1;
	}
	else if (c >= 'a && c <= 'z)
	{
		repeat = c - 'a' + 1;
	}
	else
	{
		repeat = 1;
	}
	return (repeat);
}

int main(int argc, char **argv)
{
	int	repeat;
	
	if (argc == 2)
	{
		while(*argv[1])
		{
			repeat = letter_count(*argv[1]);
			while (repeat--)
			{
				write(1,argv[1], 1);
			}
			argv[1]++
		}
	}
	write(1, "\n", 1);
}