/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hczuba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 08:59:12 by hczuba            #+#    #+#             */
/*   Updated: 2016/07/17 21:58:56 by hczuba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_0.h"
#define UL 'A'
#define UR 'C'
#define DL 'C'
#define DR 'A'
#define S 'B'
#define M ' '

char	assign_04(int row, int col, int w, int h)
{
	if (!(col == 0 || col == w) && !(row == 0 || row == h))
		return (M);
	else if (!((col == 0 || col == w) && (row == 0 || row == h)))
		return (S);
	else if (col == 0)
		return (row == 0) ? (UL) : (DL);
	else
		return (row == 0) ? (UR) : (DR);
}

int		rush_04(int w, int h)
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
			ch = assign_04(row, col, w, h);
			ft_putchar(ch);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
	return (0);
}
