/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 11:13:22 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/11 09:29:58 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "headers/libft.h"
#include <stdio.h>

int	main(void)
{
	char *str;

		str = ft_itoa(123456789);
		free(str);
	while(1);
}
