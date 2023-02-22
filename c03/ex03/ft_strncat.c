/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 09:59:23 by facetint          #+#    #+#             */
/*   Updated: 2023/02/15 18:15:29 by facetint         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (dest[i])
		i++;
	while (src[x] && x < nb)
	{
		dest[i + x] = src[x];
		x++;
	}
	dest[i + x] = '\0';
	return (dest);
}
