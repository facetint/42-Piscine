/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:46:38 by facetint          #+#    #+#             */
/*   Updated: 2023/02/17 23:48:01 by facetint         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	counter;
	int	counter2;

	counter = ac - 1;
	while (counter > 0)
	{
		counter2 = 0;
		while (av[counter][counter2])
		{
			write (1, &av[counter][counter2], 1);
			counter2++;
		}
		write(1, "\n", 1);
		counter--;
	}
}	
