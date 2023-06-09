   #include <stdio.h>

int main() {
    int a,b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    for (; a <= 3000; a += 4) {
        printf("%d\n", a);
    }

    return 0;
}
