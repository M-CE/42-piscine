/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   solve_ones.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lwray <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 16:30:51 by lwray         #+#    #+#                 */
/*   Updated: 2020/08/25 19:40:42 by mfreiin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// to solve where ones belong we take into account the 4 by 4 grind and the integers constraint that the input gives us
// integer i starts at index 0, while it is below 16 inputs we start by ......
// if the input on a certain index equals 1 we will start printing using following logic
// ..... we print at place of row 0 and line index of i a 4 as solution
// ..... we print at place of row 3 and line index of -4 a 4 as solution
// ..... we print at place of row index - 8 and line index of 0 a 4 as solution
// ..... we print at place of row index - 12 and line index of 3 a 4 as solution
void	solve_ones(int grid[4][4], int *constraints)
{
	int i;

	i = 0;
	while (i < 16)
	{
		if (constraints[i] == 1)
		{
			if (i <= 3)
				grid[0][i] = 4;
			else if (i <= 7)
				grid[3][i - 4] = 4;
			else if (i <= 11)
				grid[i - 8][0] = 4;
			else
				grid[i - 12][3] = 4;
		}
		i++;
	}
}
