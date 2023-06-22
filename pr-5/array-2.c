#include <stdio.h>

int main(){
	int i, largest,secondlargest;
	int a[5]={4,9,7,2,8};
	if(a[0]>a[1]){
		largest=a[0];secondlargest=a[1];
	}else{
		largest=a[1];secondlargest=a[0];
	}
	for(i=2;i<10;i++){
		if(a[i]>largest){
			secondlargest=largest;
			largest=a[i];
		}else
		if(a[i]>secondlargest&&a[i]!=largest){
			secondlargest=a[i];
		}
	}
	printf("the secondlargest number in array %d\n",secondlargest);
	

    

   
    return 0;
}
