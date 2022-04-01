#include "ft_printf.h"
#include "libft.h"

int handle_d(long int d)
{
	ft_putnbr_fd(d, 1);
	return (ft_strlen(ft_itoa(d)));
}
