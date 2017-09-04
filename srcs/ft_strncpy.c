/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 09:16:19 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/04 11:39:17 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char *ft_strncpy(char *dst, const char *src, size_t n)
{
	char *tmp;

	tmp = dst;
	while (*src && n > 0)
	{
		*dst++ = *src++;
		n--;;
	}
	while (n > 0)
	{
		*dst++ = '\0';
		n--;
	}
	return(tmp);
}
