#include<stdio.h>

int main(){
	
	int i;
	
	int a[5];
	int *b[5];
	printf("enter element : ");
	for(i=0;i<=4;i++){
    printf("Element %d: ", i + 1);
		scanf("%d\n\n",&a[i]);
	}
	
	for(i=0;i<=4;i++){
		b[i]=&a[i];
		printf("%u = %d\n\n",b[i],*b[i]);
	}
	return 0;
}