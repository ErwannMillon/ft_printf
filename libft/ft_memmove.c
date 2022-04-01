/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmillon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 18:36:54 by gmillon           #+#    #+#             */
/*   Updated: 2022/03/25 18:59:56 by gmillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t		i;
	char		*destcast;
	char		*srccast;

	destcast = (char *)dest;
	srccast = (char *)src;
	i = 0;
	if (dest < src)
		ft_memcpy(dest, src, len);
	else
	{
		destcast += len - 1;
		srccast += len - 1;
		while (i < len)
		{
			*destcast = *srccast;
			destcast--;
			srccast--;
			i++;
		}
	}
	return (dest);
}
