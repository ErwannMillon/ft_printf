#include <stdlib.h>

// char	ft_toupper(unsigned int a, char c)
// {
// 	if (c >= 97 && c <= 122)
// 		return (c - 32);
// 	return (c);
// }

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	result = malloc(ft_strlen(s) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = (f)(i, s[i]);
		i++;
	}
	result[i] = 0;
	return (result);
}


// int main (void)
// {
// 	char *s = "abcdefDLF";
// 	printf("%s\n", ft_strmapi(s, &ft_toupper));
// }