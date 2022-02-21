/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usesiz <usesiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:49:07 by usesiz            #+#    #+#             */
/*   Updated: 2022/02/21 17:56:08 by usesiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	char u[] = "ASFJLDASDFJKLASDJKF";
	char *p1;
	p1 = u;

	char v[] = "ASDFsdfsdfASDFASFasda";
	char *p2;
	p2 = v;

	char empty[] = "";
	char *p3;
	p3 = empty;

	printf("%s = %s\n", u, ft_strlowcase(p1));
	printf("%s = %s\n", v, ft_strlowcase(p2));
	printf("%s = %s\n", empty, ft_strlowcase(p3));
	return (0);
}
