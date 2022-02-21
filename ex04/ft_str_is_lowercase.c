/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usesiz <usesiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:42:19 by usesiz            #+#    #+#             */
/*   Updated: 2022/02/21 15:50:49 by usesiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_str_is_lowercase(char *str)
{
	int i;
	i = 0;
	
	while (str[i] != '\0')

	if((str[i] >= 'a') && (str[i] <= 'z'))
	{
		i++;
	}
	else
	{
		return (0);
	}
	return (1);
}
