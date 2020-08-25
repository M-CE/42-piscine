/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   read_constraints.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: lwray <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 15:57:11 by lwray         #+#    #+#                 */
/*   Updated: 2020/08/25 19:32:04 by mfreiin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// this function is reading the input in the string to use for the puzzle
// it contains the char input and int constraints, the chars will we converted into integers
// int i and int j mean the 2 inputs next to each other
// with given style of input from exc the string contains 31 characters (16 numbers + 15 spaces)
// while we are not at the end we take the modulo of input integer i and modulo it by 2
// if it is uneve...? and below 1 or above 5 we wont return anything since this will be wrong input given
// otherwise if correct input (between 1 and 4).....?????
int		read_constraints(char *input, int *constraints)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 31)
	{
		if (i % 2 == 0)
		{
			if (input[i] < '1' || input[i] > '4')
				return (0);
			else
			{
				constraints[j] = input[i] - '0';
				j++;
			}
		}
		else if (input[i] != ' ')
			return (0);
		i++;
	}
	if (input[i] != '\0')
		return (0);
	return (1);
}
