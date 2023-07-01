#include <stdio.h>

void reverseArray(int *a, int size) {
    int *n1 = a;                
    int *n2 = a + size - 1;        
    
    while (n1 < n2) {
        int n3 = *n1;
        *n1 = *n2;
        *n2 = n3;
        
        n1++;
        n2--;
    }
}

void printArray(int *a, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[]={12,45,78,90,67,34,87,21,99}; 
    int size = sizeof(a) / sizeof(a[0]);
    
    printf("Original array: ");
    printArray(a, size);
    
    reverseArray(a, size);
    
    printf("Reversed array: ");
    printArray(a, size);
    
    return 0;
}


