#include "main.h"
#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	n = 1024;
	*(p + 4) = 98;

	printf("a[2] = %d\n", a[2]);
	return (0);
}
