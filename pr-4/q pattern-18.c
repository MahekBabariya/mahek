#include<stdio.h>

int main(){
	int i,j,k;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		for(k=1;k<=5-i;k++){
			printf("  ");
		}
		if(i==5){
			for(j=i;j>=1;j--){
				printf("%d",j);
			}
			}else{
				for(j=i;j>=1;j--){
					printf("%d",j);
				}
			}
			printf("\n");
			
			
		
	}
	return 0;
}