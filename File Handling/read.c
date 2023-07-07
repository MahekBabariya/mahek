#include<stdio.h>

int main(){
	
	FILE  *P;
	char name[20];
	
	int p = fopen("demo.txt","r");
	
	if(p==NULL){
		printf("ERROR");
	}
	else{
		fgets(name,20,p);
		puts(name);
		fclose(p);
	}
	return 0;
}