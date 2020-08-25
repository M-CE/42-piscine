/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush03.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mfreiin- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/16 13:05:48 by mfreiin-      #+#    #+#                 */
/*   Updated: 2020/08/17 20:14:53 by mfreiin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// function prototype from ft_putchar file to print the characters that we define within this file
void	ft_putchar(char c);

// definition of how variable x (width) is printed
// char left prints the values from one side subtracted from the right. All letters except of the last one of the line will be printed 
// char middle explains with x-- to move from the right side back to left to print its middle value, one back and repeat until we stop it
// char right x==  1 we are at the end of the line and will print out its character
// we dont overwrite ft_putchar(left) because next functions are below and within new brackets
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

// to even print vertically we want to have y = y - 2: y is only different starting by y=3 or bigger (example: 3 -2 = 1, so y>0 is still given) 
// print_horizontal, x defines the width, to know how wide the line is to define where sym and " " will be set
// print_horizontal with y = y - 1 means to go back one line from y value to print the special line with B    B, because y = y will be x (ABBBC)
void	print_vertical(int x, int y, char sym)
{
	y = y - 2;
	while (y > 0)
	{
		print_horizontal(x, sym, ' ', sym);
		y = y - 1;
	}
}

// we defined the corners of the rectangle through x and y
// each corner gets a character assigned as below
// everything between those corners is char5=B or " "
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
			print_horizontal(x, char3, char5, char4);
	}
}
