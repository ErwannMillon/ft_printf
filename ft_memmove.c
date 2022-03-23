#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t		i;
	char		*destcast;
	char		*srccast;

	destcast = (char *)dest;
	srccast = (char *)src;
	i = 0;
	if (dest < src)
	{
		while (i < len)
		{
			*destcast = *srccast;
			destcast++;
			srccast++;
			i++;
		}
	}
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
