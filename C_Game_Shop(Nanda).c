#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

struct User {
    char email[50];
    char password[50];
};

struct Game {
    char title[100];
};

struct CartItem {
    struct Game game;
};

void displayGames(struct Game games[], int count) {
    printf("\nDaftar Game yang Tersedia:\n");
    printf("----------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, games[i].title);
    }
    printf("----------------------------\n");
}

void displayRecommendedGames() {
    printf("\nGame Rekomendasi:\n");
    printf("----------------------------\n");
    printf("1. The Witcher 3: Wild Hunt\n");
    printf("2. Red Dead Redemption 2\n");
    printf("3. Cyberpunk 2077\n");
    printf("4. Assassin's Creed Valhalla\n");
    printf("5. Grand Theft Auto V\n");
    printf("6. Sekiro: Shadows Die Twice\n");
    printf("7. The Last of Us Part II\n");
    printf("8. Doom Eternal\n");
    printf("9. Among Us\n");
    printf("10. Fall Guys: Ultimate Knockout\n");
    printf("----------------------------\n");
}

void addToCart(struct Game game, struct CartItem cart[], int *cartSize) {
    cart[*cartSize].game = game;
    (*cartSize)++;
}

void displayCart(struct CartItem cart[], int cartSize) {
    printf("\nIsi Keranjang Belanja Anda:\n");
    printf("------------------------------------\n");
    for (int i = 0; i < cartSize; i++) {
        printf("%d. %s\n", i + 1, cart[i].game.title);
    }
    printf("------------------------------------\n");
}

void displayReceipt(struct CartItem cart[], int cartSize) {
    printf("\nNota Pembelian Anda:\n");
    printf("------------------------------------\n");
    printf("No   | Game\n");
    printf("------------------------------------\n");
    for (int i = 0; i < cartSize; i++) {
        printf("%-5d| %-20s\n", i + 1, cart[i].game.title);
    }
    printf("------------------------------------\n");
}

int main() {
    system("color 0b");

    struct User user;
    char fixPassword[] = "C Game Shop";
    struct CartItem cart[10];
    int cartSize = 0;

    printf("\n----------Welcome to the authentication system----------\n\n");

    printf("Enter your email: ");
    fgets(user.email, sizeof(user.email), stdin);
    user.email[strcspn(user.email, "\n")] = '\0';

    printf("Enter your password: ");
    fgets(user.password, sizeof(user.password), stdin);
    user.password[strcspn(user.password, "\n")] = '\0';

    if (strcmp(user.password, fixPassword) == 0) {
        printf("\nLogin successful!\n");

        displayRecommendedGames();

        char choice;
        do {
            printf("\nApakah Anda ingin membeli game rekomendasi? (y/n): ");
            scanf(" %c", &choice);
            getchar();

            if (choice == 'y' || choice == 'Y') {
                printf("\nMasukkan nomor game rekomendasi yang ingin Anda beli: ");
                int gameNumber;
                scanf("%d", &gameNumber);
                getchar();

                struct Game recommendedGames[] = {
                    {"The Witcher 3: Wild Hunt"},
                    {"Red Dead Redemption 2"},
                    {"Cyberpunk 2077"},
                    {"Assassin's Creed Valhalla"},
                    {"Grand Theft Auto V"},
                    {"Sekiro: Shadows Die Twice"},
                    {"The Last of Us Part II"},
                    {"Doom Eternal"},
                    {"Among Us"},
                    {"Fall Guys: Ultimate Knockout"}
                };
                if (gameNumber >= 1 && gameNumber <= 10) {
                    addToCart(recommendedGames[gameNumber - 1], cart, &cartSize);
                    printf("Game telah ditambahkan ke keranjang.\n");
                } else {
                    printf("Nomor game tidak valid.\n");
                }
            } else {
                printf("\nMasukkan nama game yang ingin dibeli: ");
                char keyword[100];
                fgets(keyword, sizeof(keyword), stdin);
                keyword[strcspn(keyword, "\n")] = '\0';

                struct Game newGame;
                strcpy(newGame.title, keyword);
                addToCart(newGame, cart, &cartSize);
                printf("Game telah ditambahkan ke keranjang.\n");
            }

            printf("Apakah Anda ingin membeli lagi? (y/n): ");
            scanf(" %c", &choice);
            getchar();
        } while (choice == 'y' || choice == 'Y');

        displayCart(cart, cartSize);

        int pilihan;

        printf("\nPilih metode pembayaran: \n");
        printf("1. Visa \n");
        printf("2. MasterCard \n");
        printf("3. Dana \n");
        printf("4. Linkaja \n");
        printf("Masukkan pilihan Anda (1-4): ");
        scanf("%d", &pilihan);
        getchar();

       switch (pilihan) {
            case 1:
                {
                    int nomorKartuKredit, pin;

                    printf("Masukkan nomor kartu kredit: ");
                    scanf("%d", &nomorKartuKredit);
                    printf("Masukkan PIN: ");
                    scanf("%d", &pin);

                    printf("\nPembayaran dengan Visa berhasil!\n");

                    displayReceipt(cart, cartSize); 

                    break;
                }
            case 2:
                {
                    int nomorKartuKredit, pin;

                    printf("Masukkan nomor kartu kredit: ");
                    scanf("%d", &nomorKartuKredit);
                    printf("Masukkan PIN: ");
                    scanf("%d", &pin);

                    printf("\nPembayaran dengan MasterCard berhasil!\n");

                    displayReceipt(cart, cartSize); 

                    break;
                }
            case 3:
                {
                    char email[100], password[100];
                    int nomorTelepon;

                    printf("Masukkan email: ");
                    scanf("%s", email);
                    printf("Masukkan password: ");
                    scanf("%s", password);
                    printf("Masukkan nomor telepon: ");
                    scanf("%d", &nomorTelepon);

                    printf("\nPembayaran dengan Dana berhasil!\n");

                    displayReceipt(cart, cartSize); 

                    break;
                }
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

                    printf("\nPembayaran dengan Linkaja berhasil!\n");

                    displayReceipt(cart, cartSize); 

                    break;
                }
            default:
                printf("Pilihan tidak valid.\n");
                break;
        }
    }
    else {
        printf("\nLogin failed. Please try again.\n");
    }

    return 0;
}