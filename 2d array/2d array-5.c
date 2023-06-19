#include<stdio.h>

int main(){
	int a[20][20],i,j,n,sum[10]={0},sum1[10]={0};
	printf("enter number of row :");
	scanf("%d",&n);
	printf("enter element : \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("enter element [%d][%d]",i,j);
			scanf("%d",&a[i][j]);	
		}
		printf("\n");	
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			sum[i]=sum[i]+a[i][j];
		}
	}
	printf("matrix is ...\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\t%d\n",sum[i]);
	}
	

	
		return 0;
}