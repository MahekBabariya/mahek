#include <stdio.h>

void Length(char a[][20],int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        int count = 0;
        for (j = 0; a[i][j] !='\0'; j++) {
            count++;
        }
        printf("Length of element %d: %d\n", i + 1, count);
    }
}

int main() {
    char a[][20] = {"mahek"};
    int size = sizeof(a) / sizeof(a[0]);

    Length(a, size);

    return 0;
}
