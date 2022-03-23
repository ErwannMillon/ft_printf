#include <stdlib.h>

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		totallen;
	char	*joined;
	int		i;
	int		k;

	k = 0;
	i = 0;
	totallen = ft_strlen(s1);
	totallen += ft_strlen(s2);
	joined = malloc(totallen + 1);
	if (!joined)
		return (NULL);
	while (s1[k])
	{
		joined[i] = s1[k];
		i++;
		k++;
	}
	k = 0;
	while (s2[k])
	{
		joined[i] = s2[k];
		i++;
		k++;
	}
	joined[i] = 0;
	return (joined);
}

// int main(void)
// {
// 	printf("%s\n", ft_strjoin("tripouille", "42"));
// }