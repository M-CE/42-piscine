/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   solve_puzzle.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lwray <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 16:32:08 by lwray         #+#    #+#                 */
/*   Updated: 2020/08/25 19:33:29 by mfreiin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// function prototyping to involve the functions to be able to solve_puzzle
void	solve_fours(int grid[4][4], int *constraints);
void	solve_ones(int grid[4][4], int *constraints);

// to solve the puzzle in our case we take the functions of solving ones and fours into account
// to be able to solve the puzzle completely we would need to write the remaining functions to print ones and twos
int		solve_puzzle(int grid[4][4], int *constraints)
{
	solve_fours(grid, constraints);
	solve_ones(grid, constraints);
	return (1);
}
