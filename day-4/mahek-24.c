#include<stdio.h>

int main()
{
	
	int x=60;
	int y=56;
	int z=45;
	int sum;
	sum= (x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x));
	printf("%d",sum);
	return 0;

}