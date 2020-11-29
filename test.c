#include <stdio.h>

int		main()
{
	printf ("%10.3x\n", 10000);
	printf ("%10.x\n", 10000);
	printf ("%10x\n", 10000);

	printf ("%10.*x\n",-3, 10000);
	printf ("%*.*x\n",-10,7, 10000);
	printf ("%-10.*X\n",-3, 10000);
	return 0;
}
