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
    char fixPassword[40] = "C Game Shop";
    
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

    int pilihan;

    printf("Pilih metode pembayaran: \n");
    printf("1. Visa \n");
    printf("2. MasterCard \n");
    printf("3. Dana \n");
    printf("4. Linkaja \n");
    printf("Masukkan pilihan Anda (1-4): ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
        case 2:
            {
                int nomorKartuKredit, pin;

                printf("Masukkan nomor kartu kredit: ");
                scanf("%d", &nomorKartuKredit);
                printf("Masukkan PIN: ");
                scanf("%d", &pin);

                // Lakukan proses konfirmasi untuk metode pembayaran Visa atau MasterCard
                // ...

                break;
            }
        case 3:
        case 4:
            {
                char email[100], password[100];
                int nomorTelepon;

                printf("Masukkan email: ");
                scanf("%s", email);
                printf("Masukkan password: ");
                scanf("%s", password);
                printf("Masukkan nomor telepon: ");
                scanf("%d", &nomorTelepon);

                // Lakukan proses konfirmasi untuk metode pembayaran Dana atau Linkaja
                // ...


                break;
            }
        default:
            printf("Pilihan tidak valid.\n");
            break;
    
return 0;
}
}
