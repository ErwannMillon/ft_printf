#include <stdlib.h>
#include "libft.h"
#include "ft_printf.h"
#include <unistd.h>
#include <limits.h>

static char	*ft_strncat(char *dest, char *src, int n)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j] && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

static char	*ft_strrev(char *s)
{
	int		i;
	int		x;
	int		end;
	char	tmp;

	i = 0;
	x = 0;
	while (s[i])
		i++;
	end = i - 1;
	while (x < i / 2)
	{
		tmp = s[x];
		s[x] = s[end];
		s[end] = tmp;
		x++;
		end--;
	}
	return (s);
}

int base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

char *base_convert(long int dec, char *str)
{
	char	*result;
	int		i;

	if (dec == LONG_MIN)
		return (ft_strdup("8000000000000000"));
	result = malloc(10);
	i = 0;
	if (dec == 0)
	{
		result[i] = '0';
		i++;
	}
	while (dec > 0)
	{
		result[i] = str[dec % ft_strlen(str)];
		dec = dec / ft_strlen(str);
		i++;
	}
	result[i] = 0;
	return (ft_strrev(result));
}

char * base_convert_neg(long int dec, char *base)
{
	char	*poshex;
	int		i;
	char	*result;
	int		k;

	i = 0;
	poshex = base_convert(dec - 1, base);
	while(poshex[i])
	{
		poshex[i] = base[15 - base_index(poshex[i], base)];
		i++;
	}
	result = malloc(10);
	i = 0;
	while (i < 8 - (ft_strlen(poshex)))
	{
		result[i] = 'f';
		i++;
	}
	result[i] = 0;
	ft_strncat(result, poshex, ft_strlen(poshex));
	free(poshex);
	return (result);
}
