#include<stdio.h>

int main(){
	
	char ch;
	
	printf("enter a charecter :");
	scanf("%c",&ch);
	    if (ch >= 'a' && ch <= 'z'){
	 printf("   enter aAlphabet :");
    } else if (ch >= '0' && ch <= '9') {
        printf(" enter  Digit\n"); 
    } else{
        printf(" s enter aSpecial character :");
    }

    return 0;
}

	
	
