#include<stdio.h>

int main(){
	int m,n;
	printf("enter size of row : ");
	scanf("%d",&m);
	
	printf("enter size of column : ");
	scanf("%d",&n);
	
	int a[m][n],b[m][n];
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("enter value [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
		
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			b[j][i]=a[i][j];
		}
		printf("\n");
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
		
	}
	return 0;
}