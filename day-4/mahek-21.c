#include<stdio.h>

int main(){
	int x;
	int y;
	int sum;
	printf("enter first value:");
	scanf("%d",&x);
	printf("entre second value:");
	scanf("%d",&y);
	sum= (x*x*x) - (y*y*y) - ((3*x*y)*(x+y));
    printf("sum =%d",sum);
    return 0;
}