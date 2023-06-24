#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    char password[100];

    char correctEmail[] = "mahekbabariya@gamil.com";
    char correctPassword[] = "vaishali123";

    printf("Enter your email: ");
    scanf("%s", email);

    printf("Enter your password: ");
    scanf("%s", password);

    if (strcmp(email, correctEmail) == 0 && strcmp(password, correctPassword) == 0) {
        printf("Login successful\n");
    } else {
        printf("Login failed. Incorrect email or password\n");
    }

    return 0;
}
