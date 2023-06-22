#include<stdio.h>
#include<string.h>

int main(){
	
	char a[3];
	
	printf("enter name : ");
	scanf("%s",a);
	
	printf("%s",strlwr(a));
	
	return 0;
}