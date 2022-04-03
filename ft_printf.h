#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define FORMATS "cspdiuxX%"
#include <stdarg.h>
#include <stdlib.h>

char		str_seek(char *str);
char		*base_convert(long int dec, char *str);
static char	*ft_strrev(char *s);
int			handle_s(char *s);
int			handle_c(char c);
int			handle_d(long int d);
int			handle_X(long int dec);
int			handle_x(long int dec);
int			handle_p(long int p);
int			handle_o(long int dec);
int			handle_lint_arg(char c, long int dec);
int			handle_str_arg(char c, char *str);
int			handle_char_arg(char c, char b);
void		ft_putnbr(long int nb);
void		ft_putstr(char *str);
int			ft_printf(const char *str, ...);
long int	num_len(long int copy);
char * base_convert_neg(long int dec, char *base);
int			ft_atoi_base(char *str, char *base);

//i s str
// u d p x X long int
//c char

#endif