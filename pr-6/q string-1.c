#include<stdio.h>
#include<string.h>

int main(){
	char a[10],b[10];
	int  i,j=0,len=0,f=0;
	printf("enter any string");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++){
		len+=1;
	}
	for(i=len-1;i>=0;i--){
		b[j++]=a[i];
		
	}
	\
	b[j]='\0';
	for(i=0;i<len;i++){
		if(a[i]!=b[i]){
			f=1;
			break;
		}
		
	}
	if(f==0){
	
	printf("%s is a pelimdrom number\n ",a);
}else{
	printf("%s is not a pelindram number\n ",a);
}

	printf("%s is the reverse strings\n",b);
	
	return 0;
}