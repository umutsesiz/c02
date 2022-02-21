/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usesiz <usesiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:43:56 by usesiz            #+#    #+#             */
/*   Updated: 2022/02/21 12:27:37 by usesiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char	*dest, char	*src);

int		main(void)
{
	char u[] = "Hello world.";
	char d[] = "Goodbye world.";

	printf("İlk hali\n\tsrc: %s\n\tdes: %s\n", u, d);

	ft_strcpy(d,u);

	printf("Son hali\n\tsrc: %s\n\tdes: %s\n", u, d );
}
