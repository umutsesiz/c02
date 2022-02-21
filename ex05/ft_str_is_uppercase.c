/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usesiz <usesiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:02:41 by usesiz            #+#    #+#             */
/*   Updated: 2022/02/21 16:06:02 by usesiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_str_is_uppercase(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0') 
	{
		if((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
