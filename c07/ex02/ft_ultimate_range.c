/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 05:28:09 by facetint          #+#    #+#             */
/*   Updated: 2023/02/22 17:01:04 by facetint         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		bound;
	int		i;
	int		*ret_val;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min - 1;
	ret_val = malloc(bound * sizeof(int));
	if (ret_val == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = ret_val;
	i = 0;
	while (i <= bound)
	{
		ret_val[i] = min + i;
		i++;
	}
	return (bound + 1);
}
