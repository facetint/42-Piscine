/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:10:00 by facetint          #+#    #+#             */
/*   Updated: 2023/02/15 18:15:52 by facetint         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		x = 0;
		while ((str[i + x] == to_find[x]) && str[i + x])
		{
			if (to_find[x + 1] == '\0')
				return (str + i);
			x++;
		}
		i++;
	}
	return (0);
}
