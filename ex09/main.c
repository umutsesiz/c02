/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usesiz <usesiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:44:24 by usesiz            #+#    #+#             */
/*   Updated: 2022/02/21 19:52:53 by usesiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	char str2[] = " sALuT, ComMenT tu VAS ? 42Mots QUarante-deUX; cinQuantE+ET+un";

	char empty[] = "";

	printf("Önce = %s", str1);
	printf("\nSonra = %s\n", ft_strcapitalize(str1));
	printf("\nÖnce = %s", str2);
	printf("\nSonra = %s\n", ft_strcapitalize(str2));
	printf("\nEmpty = %s", ft_strcapitalize(empty));

}
