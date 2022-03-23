#include <stdlib.h>

static int ft_count (const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			count++;
			while ((s[i] != c) && s[i])
				i++;
		}
	}
	return (count);
}
static char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*sub;

	i = 0;
	while (s[start + i] && i < len)
		i++;
	sub = malloc((i + 1) * sizeof(char));
	i = 0;
	while (s[start + i] && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = 0;
	return (sub);
}

char **ft_split(char const *s, char c)
{
	char			**result;
	size_t			i;
	size_t			start;
	size_t			count;

	count = 0;
	result = malloc(ft_count(s, c) * sizeof(char *));
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (i != start)
		{
			result[count] = ft_substr(s, start, i - start);
			count++;
		}
		if (s[i])
			i++;
	}
	result[count] = NULL;
	return (result);
}

// int main(void)
// {
// 	int i = 0;
// 	char * * result = ft_split(" Tripouille ", ' ');
// 	while (result[i])
// 	{
// 		printf("R:%s_\n", result[i]);
// 		i++;
// 	}
// }