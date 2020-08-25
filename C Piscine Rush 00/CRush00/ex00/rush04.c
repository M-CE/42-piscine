/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush04.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mfreiin- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/16 13:05:48 by mfreiin-      #+#    #+#                 */
/*   Updated: 2020/08/16 16:44:41 by mfreiin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_horizontal(int x, char left, char middle, char right)
{
	if (x > 0)
	{
		ft_putchar(left);
		x = x - 1;
		while (x > 1)
		{
			ft_putchar(middle);
			x--;
		}
		if (x == 1)
			ft_putchar(right);
		ft_putchar('\n');
	}
}

void	print_vertical(int x, int y, char sym)
{
	y = y - 2;
	while (y > 0)
	{
		print_horizontal(x, sym, ' ', sym);
		y = y - 1;
	}
}

void	rush(int x, int y)
{
	char char1;
	char char2;
	char char3;
	char char4;
	char char5;

	char1 = 'A';
	char2 = 'C';
	char3 = 'A';
	char4 = 'C';
	char5 = 'B';
	if (y > 0 && x > 0)
	{
		print_horizontal(x, char1, char5, char2);
		if (y > 2)
			print_vertical(x, y, char5);
		if (y > 1)
			print_horizontal(x, char4, char5, char3);
	}
}
