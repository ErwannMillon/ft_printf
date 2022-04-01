#include "libft.h"
#include "ft_printf.h"

int main (void)
{
	int x = 0;

	ft_printf("abcd%padf %p %pmasdf, %x", NULL, 0, &x, 32);
	printf("\n");
	printf("abcd%padf %p %pmasdf, %x", NULL, 0, &x, 32);
	printf("\n");
	// ft_printf("abcd%dadf %d %umasdf, %x", -2147483648, -4567, 0, 435);
	// printf("\n");
	// printf("abcd%dadf %d %umasdf, %x", -2147483648, -4567, 0, 435);
	printf("\n\n\n");
	ft_putnbr(-4567);


}
