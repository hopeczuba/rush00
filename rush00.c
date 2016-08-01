/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hczuba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 11:33:02 by hczuba            #+#    #+#             */
/*   Updated: 2016/07/19 10:48:09 by hczuba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_0.h"
#define C 'o'
#define T '-'
#define S '|'
#define M ' '

char	assign_00(int row, int col, int w, int h)
{
	if (!(col == 0 || col == w) && !(row == 0 || row == h))
		return (M);
	else if ((col == 0 || col == w) && (row == 0 || row == h))
		return (C);
	else if ((col == 0 || col == w) && !(row == 0 || row == h))
		return (S);
	else
		return (T);
}

int		rush_00(int w, int h)
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
			ch = assign_00(row, col, w, h);
			ft_putchar(ch);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
	return (0);
}

