#include<stdio.h>

int main(){
	int x=77;
	int y=23;
	int z=45;
	int ans;
	ans=(x*x*x) - (y*y*y) - (z*z*z) - (3*(x+y))+(3*(y+z)+(3*(z+x)));
	printf("ans = %d",ans);
	return 0;

}