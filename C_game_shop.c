#include <stdio.h>
#include <string.h>
#include <windows.h>

struct user {
    char email[50];
    char password[50];

};

int main() {
    system("color 0b");

    struct user user;
    char password[50];
    char fixPassword[10] = "Panjiee22";
    
    printf("\n----------Welcome to authentication system----------\n\n");
    
    
    printf("Enter your email: ");
    fgets(user.email, sizeof(user.email), stdin);
    user.email[strcspn(user.email, "\n")] = '\0';
    
    printf("Enter your password: ");
    fgets(user.password, sizeof(user.password), stdin);
    user.password[strcspn(user.password, "\n")] = '\0';
    
    
    if (strcmp(user.password, fixPassword) == 0) {
        printf("\nRegistration successful!\n");
    }
    else {
        printf("\nPassword confirmation failed. Please try again.\n");
    }
    
return 0;
}
