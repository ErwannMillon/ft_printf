/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmillon <gmillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:29:33 by gmillon           #+#    #+#             */
/*   Updated: 2022/03/21 15:26:42 by gmillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char * dest, const char *src, size_t size)
{
	int				j;
	unsigned int	i;

	i = 0;
	j = 0;
	while (src[j])
	{
		j++;
	}
	if (size > 0)
	{
		while (i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}	
	return (j);
}
