#include<stdio.h>

int main(){
	
	int r,c;

	for(r=0;r<5;r++){
		char ch='A';
		for(c=0;c<=r;c++){
			printf("%c",ch++);
		}
		printf("\n");
		
		
	}
	return 0;
}