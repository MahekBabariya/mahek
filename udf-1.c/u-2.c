#include<stdio.h>
#include<string.h>
 
 void sum(int a){
     
 }
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    if (number%3==0&&number%5==0) {
        printf("this number is valid\n");
    } else {
        printf("this number is not valid\n");
    }

    return 0;
}
