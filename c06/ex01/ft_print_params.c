/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:45:53 by facetint          #+#    #+#             */
/*   Updated: 2023/02/17 23:46:10 by facetint         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	counter;
	int	counter2;

	counter2 = 1;
	while (counter2 < ac)
	{
		counter = 0;
		while (av[counter2][counter])
		{
			write(1, &av[counter2][counter], 1);
			counter++;
		}
		write(1, "\n", 1);
		counter2++;
	}
}
