/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 05:04:23 by facetint          #+#    #+#             */
/*   Updated: 2023/02/22 20:04:08 by facetint         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		counter;
	char	*ret_val;

	counter = 0;
	while (src[counter])
		counter++;
	ret_val = malloc(sizeof(char) * (counter + 1));
	if (ret_val == NULL)
		return (0);
	counter = 0;
	while (src[counter])
	{
		ret_val[counter] = src[counter];
			counter++;
	}
	ret_val[counter] = '\0';
	return (ret_val);
}
