#include<stdio.h>

int main(){
	int a[3][3],i,j,sum=0,average,m,n;
	printf("enter number of element : ");
	scanf("%d",&m);
	
	printf("enter number of element : ");
	scanf("%d",&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
		{
			printf("enter value [%d][%d] ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			sum+=a[i][j];
		
		}
		average =sum/n;
		printf("average =%d",average);
		
	}
	printf("\n");
	
	
	
	return 0;
}