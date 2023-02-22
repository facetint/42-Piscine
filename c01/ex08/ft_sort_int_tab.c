/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 21:31:17 by facetint          #+#    #+#             */
/*   Updated: 2023/02/23 00:28:41 by facetint         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int	*x, int	*y)
{
	int	swap;

	swap = *x;
	*x = *y;
	*y = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;

	while (size >= 0)
	{
		counter = 0;
		while (counter < (size -1))
		{
			if (tab[counter] > tab[counter + 1])
				ft_swap (&tab[counter], &tab[counter +1]);
			counter++;
		}
		size--;
	}
}
