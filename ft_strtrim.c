#include <stdlib.h>

static int	ft_strlen(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char	*sub;
	size_t		srclen;

	srclen = ft_strlen(s);
	i = 0;
	while (s[start + i] && i < len && (start + i < srclen))
		i++;
	sub = malloc((i + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len && (start + i < srclen))
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = 0;
	return (sub);
}


int	in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*strdup(const char *s)
{
	int		len;
	char	*str;
	int		i;

	i = 0;
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*result;
	
	end = ft_strlen(s1) - 1;
	start = 0;
	while (s1[start] && in_set(s1[start], set))
		start++;
	while (s1[end] && in_set(s1[end], set))
		end--;
	end++;
	if (end - start > 0)
		result = ft_substr(s1, start, (end - start));
	else if (end == 1)
		return (strdup(s1));
	else
		return (strdup(""));
	return (result);
}

// #include <stdio.h>
// int main (void)
// {
	
// 	printf("%s\n", ft_strtrim("m", "tg"));
// }
