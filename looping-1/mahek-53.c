#include<stdio.h>

int main(){

    int a, b;
	
    printf("Enter starting year: ");
    scanf("%d", &a);
	
    printf("Enter ending year: ");
    scanf("%d", &b);

    while (a <= b) {
        if (a % 4 == 0) {
            printf("%d\n", a);
        }
        a++;
    }
	
    return 0;
}


	

	
