/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lwray <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 15:52:00 by lwray         #+#    #+#                 */
/*   Updated: 2020/08/25 19:24:11 by mfreiin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// prototyppe functions to not link the functions with a .h or .c file
int		solve_puzzle(int grid[4][4], int *constraints);
void	print_grid(int grid[4][4]);
int		read_constraints(char *input, int *constraints);

// print Error with output "Error" whenever this function is calles
void	print_error(void)
{
	write(1, "Error\n", 6);
}

// take the grid size, which is 4 by 4 and fill it with 0s
// row and column are integers here
// row will be filled with 0s while the index of it is below 4 (until 3, because we have row0, row1, row2, row3)
// as long as row is below 4 the column will also be filled with 0s
// as long as column is below 4 the grid will have the input of 0 and move up each column until =4 is reached and it will stop there
// same goes for rows, inputs will be filled until row=4 is met
void	fill_grid_with_zeros(int grid[4][4])
{
	int row;
	int column;

	row = 0;
	while (row < 4)
	{
		column = 0;
		while (column < 4)
		{
			grid[row][column] = 0;
			column++;
		}
		row++;
	}
}

// main function holds argumentc..?, and argumentvalue of type char
// it holds the integer of the grids size (4 times 4)
// it holds alos the constraints which are the 16 input fields that we need to solve the puzzle respectively
// input check to read the constraints (own function from other file), (16 inputs) and to see if it equals 1 because of index 1
// inputs are the output command (at index 0) and the string of valies (at index 1)
// if input check is unequal 1 an error will be printed
// solve_check is taking function of solve_puzzle into account which holds the grid and the constraints (16 inputs)
// if the solve_check does not apply to the function it will throw an error
// otherwise the grid will be printed by the function of print_grid
int		main(int argc, char **argv)
{
	int grid[4][4];
	int constraints[16];
	int input_check;
	int solve_check;

	fill_grid_with_zeros(grid);
	if (argc != 2)
	{
		print_error();
		return (0);
	}
	input_check = read_constraints(argv[1], constraints);
	if (input_check != 1)
	{
		print_error();
		return (0);
	}
	solve_check = solve_puzzle(grid, constraints);
	if (solve_check != 1)
	{
		print_error();
		return (0);
	}
	print_grid(grid);
	return (0);
}
