/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 11:13:22 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/11 08:47:30 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "headers/libft.h"
#include <stdio.h>

int	main(void)
{
	char *s1 = "split this please";
	char **tab;

	printf("||%s||\n", s1);
	tab = ft_strsplit(s1, ' ');
	int i = 0;
	while (tab[i])
	{
		printf("%s", tab[i]);
		i++;
	}
}
