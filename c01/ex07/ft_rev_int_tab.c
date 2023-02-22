/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:27:38 by facetint          #+#    #+#             */
/*   Updated: 2023/02/23 00:28:12 by facetint         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	swap;

	counter = 0;
	while (counter < size)
	{
		swap = tab[counter];
		tab[counter] = tab[size -1];
		tab[size -1] = swap;
		counter++;
		size--;
	}
}
