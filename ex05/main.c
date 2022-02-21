/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usesiz <usesiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:06:16 by usesiz            #+#    #+#             */
/*   Updated: 2022/02/21 16:16:27 by usesiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int main(void)
{
	char u[] = "ABCDEFGHADSGASLGEWGGKOWE";
	char *p;
	p = u;

	char v[] = "SDKFHSŞRHKDİFGİSDF'2ASDG";
	char *y;
	y = v;

	char empty[] = "";
	char *s;
	s = empty;

	printf("%s = %d\n", u, ft_str_is_uppercase(p));
	printf("%s = %d\n", v, ft_str_is_uppercase(y));
	printf("Empty = %d", ft_str_is_uppercase(s));
	return (0);
}
