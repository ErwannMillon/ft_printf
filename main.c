#include "libft.h"
#include "ft_printf.h"
#include <string.h>
#include <errno.h>

int main (void)
{
	int x = 0;
	// char *teststring = "ab%%cd%padf %p %pmasdf, %x";
	// char *teststring = "ab%%cd%padf %p %pmasdf, %x";
	// char *teststring = "ab%%cd%padf %p %pmasdf, %x";
	// char *teststring = "ab%%cd%padf %p %pmasdf, %x";
	char *teststring = "ab%%cd  %p adf %i %pmasdf, %d";
	// char *teststring = "%i %i %i";
	
	// x = ft_printf(teststring, &x, -020, -0x2A);
	// printf("     result: %d", x);
	// printf("\n");
	// x =    printf(teststring, &x, -020, -0x2A);
	// // printf("\n%s\n\n", strerror(errno));
	// printf("     result: %d", x);
	// printf("\n");
	// // system("leaks a.out");
	// ft_printf("abcd%iadf %d %umasdf, %x", -214748368, -4567, 0, 435);
	// printf("\n");
	//    printf("abcd%iadf %d %umasdf, %x", -214748368, -4567, 0, 435);
	x = ft_printf(" %X ", -1654);
	printf("     result: %d", x);

	printf("\n");
	x =    printf(" %X ", -1654);
	printf("     result: %d", x);
	printf("\nasaf\n");
	// handle_x(200);
	// handle_x(-200);
}
// #include <stdio.h>

// int main()
// {
// 	char *teststring = "abcd  %p adf %i %pmasdf, %d";
//     int x =    printf(teststring, &x, -020, -0x2A);

//     return 0;
// }
