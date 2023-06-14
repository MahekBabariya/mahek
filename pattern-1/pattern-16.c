#include<stdio.h>

int main(){
	int r,c,row=5;
	for(r=1;r<=row;r++){
		for(c=1;c<=row-r+1;c++){
			if((r+c)%2==0){
				printf("1");
			}else{
				printf("0");
		}
	}
		printf("\n");
   }
  return 0;
}
	