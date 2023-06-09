#include<stdio.h>

int main(){
	
	int n,i=1;
	printf("Enter a number: ");
    scanf("%d", &n);
   
    
    while(n>=0){
    	if(n%2==0){
		
    	printf("%d\n",n);
    }
    	n--;
    
	}
	return 0;

}

