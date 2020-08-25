/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mfreiin- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/16 13:05:25 by mfreiin-      #+#    #+#                 */
/*   Updated: 2020/08/17 20:19:12 by mfreiin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// only write function allowed which acts like printf, &c means to take the place in memory where this aariable is stored)
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
