#include <unistd.h>
static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
	long int	copy;

	copy = n;
	if (copy == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (copy < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(copy * -1, fd);
	}
	else if (copy > 9)
	{
		ft_putnbr_fd(copy / 10, fd);
		ft_putnbr_fd(copy % 10, fd);
	}
	else
	{
		ft_putchar_fd((char)(copy + 48), fd);
	}
}

// #include <fcntl.h>
// int main(void)
// {
// 	int x = open("test.txt", O_RDWR);
// 	ft_putnbr_fd(-42, x);
// }