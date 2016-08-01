/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hczuba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 08:59:12 by hczuba            #+#    #+#             */
/*   Updated: 2016/07/17 12:06:00 by hczuba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_0.h"
#define LC 'A'
#define RC 'C'
#define S 'B'
#define M ' '

char	assign_03(int row, int col, int w, int h)
{
	if (!(col == 0 || col == w) && !(row == 0 || row == h))
		return (M);
	else if (col == 0)
		return (row == 0 || row == h) ? (LC) : (S);
	else if (col == w)
		return (row == 0 || row == h) ? (RC) : (S);
	else
		return (S);
}

int		rush_03(int w, int h)
{
	int		col;
	int		row;
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
			ch = assign_03(row, col, w, h);
			ft_putchar(ch);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
	return (0);
}
