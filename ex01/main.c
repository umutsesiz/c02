/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usesiz <usesiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:22:17 by usesiz            #+#    #+#             */
/*   Updated: 2022/02/21 13:32:41 by usesiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char src[] = "Programlama";
	char dest[] = "Bilgisayar";
	unsigned int n;

	n = 7;

	printf("önce\n\tsrc: %s\n\tdes: %s\n", src, dest);

    ft_strncpy(dest, src, n);

	printf("sonra\n\tsrc: %s\n\tdes: %s\n", src, dest);
	return (0);
}
