/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usesiz <usesiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:34:09 by usesiz            #+#    #+#             */
/*   Updated: 2022/02/21 13:54:11 by usesiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_str_is_alpha(char *str)
{
	int result;
	int i;
	
	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i]	<= 'z') || (str[i] >= 'A') && (str[i] <= 'Z'))
			result = 1;
		else
			return (0);
		i++;
	}
	return (result);
}
