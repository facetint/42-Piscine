/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:29:54 by facetint          #+#    #+#             */
/*   Updated: 2023/02/02 14:29:56 by facetint         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2_sup2(int x, int x2, int x3, int x4)
{
	if (x * 1000 + x2 * 100 + x3 * 10 + x4 != 9899)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2_sup(int x, int x2)
{
	int	x3;
	int	x4;

	x3 = 0;
	x4 = 0;
	while (x3 <= 9)
	{
		while (x4 <= 9)
		{
			if (x * 10 + x2 < x3 * 10 + x4)
			{
				ft_putchar(x + 48);
				ft_putchar(x2 + 48);
				ft_putchar(' ');
				ft_putchar(x3 + 48);
				ft_putchar(x4 + 48);
				ft_print_comb2_sup2(x, x2, x3, x4);
			}
			x4++;
		}
		x4 = 0;
		x3++;
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	x2;

	x = 0;
	x2 = 0;
	while (x <= 9)
	{
		while (x2 <= 9)
		{
			ft_print_comb2_sup(x, x2);
			x2++;
		}
		x2 = 0;
		x++;
	}
}
