#include<stdio.h>

add(int a[],int m){
	int sum=0,i;
	
	for(i=0;i<m;i++){
		sum+=a[i];
			}
			printf("add : %d",sum);
}

int main(){
	int n;
	
	printf("enter value : ");
	scanf("%d",&n);
	
	int arr[n],i;
	for(i=0;i<n;i++){
		
		printf("enter value [%d] : ",i);
		scanf("%d",&arr[i]);
		
	}
	 add(arr,n);
	 return 0;
}

