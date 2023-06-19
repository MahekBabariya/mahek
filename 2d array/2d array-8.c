#include<stdio.h>

int main(){
	int  a[3][3],i,j,n,sum=0;
	printf("enter number of row : ");
	scanf("%d",&n);
	printf("enter element : \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("enter element [%d][%d]\t",i,j);
			scanf("%d",&a[i][j]);
					}
	}
	printf("matrix is ...\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i+j==n-1){
				sum+=a[i][j];
			}
		}
	}
	printf(" anti digonal sum of [%d]",sum);
	
	return 0;
}