/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hczuba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 06:52:01 by hczuba            #+#    #+#             */
/*   Updated: 2016/07/17 11:50:38 by hczuba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_0.h"
#define UL '/'
#define UR '\\'
#define DL '\\'
#define DR '/'
#define T '*'
#define S '*'
#define M ' '

char	assign_01(int r, int c, int w, int h)
{
	if (!(c == 0 || c == w) && !(r == 0 || r == h))
		return (M);
	else if ((((c == 0) && (r == 0))) || (((c == w) && (r == h))))
		return (UL);
	else if ((((c == 0) && (r == h))) || (((c == w) && (r == 0))))
		return (DL);
	else
		return (T);
}

int		rush_01(int w, int h)
{
	int		c;
	int		r;
	char	ch;

	if (w == 0 || h == 0)
		return (0);
	w--;
	h--;
	r = 0;
	while (r <= h)
	{
		c = 0;
		while (c <= w)
		{
			ch = assign_01(r, c, w, h);
			ft_putchar(ch);
			c++;
		}
		ft_putchar('\n');
		r++;
	}
	return (0);
}
