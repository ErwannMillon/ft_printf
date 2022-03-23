/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmillon <gmillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:33:31 by gmillon           #+#    #+#             */
/*   Updated: 2022/03/23 16:31:27 by gmillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *dest, int c, size_t len)
{
	char		*destcast;
	size_t		i;

	i = 0;
	destcast = (char *)dest;
	while (i < len)
	{
		*destcast = (unsigned char)c;
		destcast++;
		i++;
	}
	return (dest);
}
