#include <stdlib.h>
#include "libft.h"
#include <unistd.h>

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
	// s[i] = 0;
	return (s);
}

char *base_convert(long int dec, char *str)
{
	char	*result;
	int	i;

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

