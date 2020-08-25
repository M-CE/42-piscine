/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_grid.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lwray <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 15:56:02 by lwray         #+#    #+#                 */
/*   Updated: 2020/08/25 19:28:04 by mfreiin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// print_grid will be outputtes if the input is correct that will be given
// it takes the integer for rows, columns and char of digits into account
// digit will compile the integers into chars, so that we are able to use the "write" function
// we enter row at index 0 and print columns 0
// while the columns are below index 4 we revert the digit from the grid into an char and then write it in the puzzle
// if the column is not three then write ...?? in there
// do that for all of the columns moving up until index 4
// then increment by row until we reach row index 3 (last one)
void	print_grid(int grid[4][4])
{
	int		row;
	int		column;
	char	digit;

	row = 0;
	while (row < 4)
	{
		column = 0;
		while (column < 4)
		{
			digit = grid[row][column] + '0';
			write(1, &digit, 1);
			if (column != 3)
				write(1, " ", 1);
			column++;
		}
		write(1, "\n", 1);
		row++;
	}
}
