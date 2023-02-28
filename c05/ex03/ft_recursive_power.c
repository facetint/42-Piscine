/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 02:27:09 by facetint          #+#    #+#             */
/*   Updated: 2023/02/18 02:29:47 by facetint         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if ((nb == 0 && power == 0) || (power == 0))
		return (1);
	else if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, (power - 1)));
}
