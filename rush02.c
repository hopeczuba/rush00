/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hczuba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 08:59:12 by hczuba            #+#    #+#             */
/*   Updated: 2016/07/17 11:55:02 by hczuba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_0.h"
#define UC 'A'
#define LC 'C'
#define S 'B'
#define M ' '

char	assign_02(int row, int col, int w, int h)
{
	if (!(col == 0 || col == w) && !(row == 0 || row == h))
		return (M);
	else if (row == 0)
		return (col == 0 || col == w) ? (UC) : (S);
	else if (row == h)
		return (col == 0 || col == w) ? (LC) : (S);
	else
		return (S);
}

int		rush_02(int w, int h)
{
	int		row;
	int		col;
	char	ch;

	if (w == 0 || h == 0)
		return (0);
	w--;
	h--;
	row = 0;
	while (row <= h)
	{
		col = 0;
		while (col <= w)
		{
			ch = assign_02(row, col, w, h);
			ft_putchar(ch);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
	return (0);
}
