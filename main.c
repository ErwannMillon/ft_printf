#include "libft.h"
#include "ft_printf.h"

int main (void)
{
	int x = 0;

	ft_printf("abcd%dadf %d %umasdf, %x", 333, 134, 14, 32);
	printf("\n");
	printf("abcd%dadf %d %umasdf, %x", 333, 134, 14, 32);
	printf("\n");
	ft_printf("abcd%dadf %d %umasdf, %x", 1234, -4567, 0, 435);
	printf("\n");
	printf("abcd%dadf %d %umasdf, %x", 1234, -4567, 0, 435);
	printf("\n\n\n");
	ft_putnbr(-4567);


}
