/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usesiz <usesiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:14:16 by usesiz            #+#    #+#             */
/*   Updated: 2022/02/22 16:17:14 by usesiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(void)
{
	char src[] = "Bilgisayar";
	char dest[] = "Programlama";
	unsigned int n;

	n = 4;

	printf("ÖNCE\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n", src, dest, n);

    n = ft_strlcpy(dest, src, n);

	printf("SONRA\n\tsrc: %s\n\tdes: %s\n\tsize: %d", src, dest, n);
	return (0);
}
