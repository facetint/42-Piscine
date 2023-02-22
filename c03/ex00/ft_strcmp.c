/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:41:12 by facetint          #+#    #+#             */
/*   Updated: 2023/02/11 09:22:36 by facetint         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] && s1[counter] == s2[counter])
		counter++;
	return (s1[counter] - s2[counter]);
}
