/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:48:30 by facetint          #+#    #+#             */
/*   Updated: 2023/02/14 16:27:26 by facetint         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	counter;
	int	counter2;

	counter = 0;
	while (dest[counter])
		counter++;
	counter2 = 0;
	while (src[counter2])
	{
		dest[counter] = src[counter2];
		counter2++;
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
