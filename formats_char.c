int handle_c(char c)
{
	write(1, &c, 1);
	return (1);
}

int handle_s(char *s)
{
	ft_putstr(s);
	return (ft_strlen(s));
}