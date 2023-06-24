#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool validatePassword(char password[]) {
    int length = strlen(password);
    bool hasLetter = false;
    bool hasDigit = false;
    bool hasSpecialSymbol = false;
    
    if (length < 6)
        return false;
    
    for (int i = 0; i < length; i++) {
        if (isalpha(password[i]))
            hasLetter = true;
        else if (isdigit(password[i]))
            hasDigit = true;
        else if (!isalnum(password[i]))
            hasSpecialSymbol = true;
    }
    
    return (hasLetter && hasDigit && hasSpecialSymbol);
}

int main() {
    char password[100];
    
    printf("Enter a password: ");
    fgets(password, sizeof(password), stdin);
    
    password[strcspn(password, "\n")] = '\0';
    
    if (validatePassword(password))
        printf("this password is valid \n");
    else
        printf("this password is invalid \n");
    
    return 0;
}
