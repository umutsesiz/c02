/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usesiz <usesiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:39:54 by usesiz            #+#    #+#             */
/*   Updated: 2022/02/21 12:14:36 by usesiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcpy(char	*dest, char	*src)
{
	int c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
