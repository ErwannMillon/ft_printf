/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmillon <gmillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:33:21 by gmillon           #+#    #+#             */
/*   Updated: 2022/03/23 16:30:55 by gmillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *p1, const void *p2, size_t size)
{
	char		*cast1;
	char		*cast2;
	size_t		i;

	i = 0;
	cast1 = (char *)p1;
	cast2 = (char *)p2;
	while (i < size)
	{
		if (!(cast1[i] == cast2[i]))
		{
			if ((cast1[i] - cast2[i]) == 128)
				return (-128);
			if ((cast1[i] - cast2[i]) == -128)
				return (128);
			return ((cast1[i] - cast2[i]));
		}
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char s[] = {-128, 0, 127, 0};
// 	char sCpy[] = {-128, 0, 127, 0};
// 	char s2[] = {0, 0, 127, 0};
// 	char s3[] = {0, 0, 42, 0};
// 	int x = 4;
// 	printf("%d\n", ft_memcmp(sCpy, s3, x));
// 	printf("%d\n", memcmp(sCpy, s3, x));

// 	printf("%d\n", ft_memcmp(s2, s, x));
// 	printf("%d\n", memcmp(s2, s, x));

// }