/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 11:13:22 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/04 09:38:59 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "headers/libft.h"
#include <stdio.h>

int	main(void)
{
	char	s1[30];
	char	s2[30];
	char	*src = "0123456789";

	strncpy(s1, src, 30);
	printf("%s\n-----\n", s1);
	ft_strncpy(s2, src, 30);
	printf("%s", s2);
	return (0);
}
