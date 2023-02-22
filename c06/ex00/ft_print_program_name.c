/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:44:44 by facetint          #+#    #+#             */
/*   Updated: 2023/02/17 23:45:39 by facetint         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac == 1)
	{
		i = 0;
		while (av[0][i])
		{
			write(1, &av[0][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
