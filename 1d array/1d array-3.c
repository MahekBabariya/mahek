#include<stdio.h>

int main(){
	int a[10],i,n,sum=0,average;
	printf("enter number of elements : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("enter number %d : ",i+1);
		scanf("%d",&a[i]);
		
		sum+=a[i];
	}
	average =sum/n;
	printf("average =%d ",average);
	return 0;
}