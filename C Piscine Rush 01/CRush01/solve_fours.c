/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   solve_fours.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lwray <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 16:28:53 by lwray         #+#    #+#                 */
/*   Updated: 2020/08/23 16:30:27 by lwray         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	fill_column(int grid[4][4], int col_no)
{
	grid[0][col_no] = 1;
	grid[1][col_no] = 2;
	grid[2][col_no] = 3;
	grid[3][col_no] = 4;
}

void	fill_column_backwards(int grid[4][4], int col_no)
{
	grid[0][col_no] = 4;
	grid[1][col_no] = 3;
	grid[2][col_no] = 2;
	grid[3][col_no] = 1;
}

void	fill_row(int grid[4][4], int row_no)
{
	grid[row_no][0] = 1;
	grid[row_no][1] = 2;
	grid[row_no][2] = 3;
	grid[row_no][3] = 4;
}

void	fill_row_backwards(int grid[4][4], int row_no)
{
	grid[row_no][0] = 4;
	grid[row_no][1] = 3;
	grid[row_no][2] = 2;
	grid[row_no][3] = 1;
}

void	solve_fours(int grid[4][4], int *constraints)
{
	int i;

	i = 0;
	while (i < 16)
	{
		if (constraints[i] == 4)
		{
			if (i <= 3)
				fill_column(grid, i);
			else if (i <= 7)
				fill_column_backwards(grid, i - 4);
			else if (i <= 11)
				fill_row(grid, i - 8);
			else
				fill_row_backwards(grid, i - 12);
		}
		i++;
	}
}
