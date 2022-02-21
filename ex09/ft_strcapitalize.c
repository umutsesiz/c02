/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usesiz <usesiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:59:43 by usesiz            #+#    #+#             */
/*   Updated: 2022/02/21 19:47:19 by usesiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int i;
	int to;

	i = 0;
	to = 1;

	while (str[i] != '\0')
	{
		if((str[i] >= 'a') && (str[i] <= 'z')
				|| (str[i] >= 'A') && (str[i] <= 'Z')
				|| (str[i] >= '0') && (str[i] <= '9'))
		{
			if(to && (str[i] <= 'z') && (str[i] >= 'a'))
				str[i] = str[i] - 32;
			else if(!to && (str[i] <= 'Z') && (str[i] >= 'A'))
				str[i] = str[i] + 32;
			to = 0;
		}
		else
			to = 1;
		i++;
	}
	return(str);
}
