/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usesiz <usesiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:07:26 by usesiz            #+#    #+#             */
/*   Updated: 2022/02/22 16:15:42 by usesiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int sayım;
	unsigned int dizin;

	dizin = 0;
	sayım = 0;

	while (src[sayım] != '\0')
	{
		sayım++;
	}
	if (size != 0)
	{
		while ((src[dizin] != '\0') && dizin < (size - 1))
		{
			dest[dizin] = src[dizin];
			dizin++;
		}
		dest[dizin] = '\0';
	}
	return (sayım);
}
