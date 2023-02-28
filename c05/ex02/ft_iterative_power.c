/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 02:23:58 by facetint          #+#    #+#             */
/*   Updated: 2023/02/18 02:26:44 by facetint         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	x;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	x = nb;
	while (power > 1)
	{
		x = x * nb;
		power--;
	}
	return (x);
}
