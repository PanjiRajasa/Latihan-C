//Include library
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>



// Pembuatan struct
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




// Fungsi untuk game rekomendasi
void displayRecommendedGames() {
    
    
    
    printf("| ---------------------------------- |\n");
    printf("|          Game Rekomendasi:         |\n");
    printf("| ---------------------------------- |\n");
    printf("| 1. The Witcher 3: Wild Hunt        |\n");
    printf("| 2. Red Dead Redemption 2           |\n");
    printf("| 3. Cyberpunk 2077                  |\n");
    printf("| 4. Assassin's Creed Valhalla       |\n");
    printf("| 5. Grand Theft Auto V              |\n");
    printf("| 6. Sekiro: Shadows Die Twice       |\n");
    printf("| 7. The Last of Us Part II          |\n");
    printf("| 8. Doom Eternal                    |\n");
    printf("| 9. Among Us                        |\n");
    printf("| 10. Fall Guys: Ultimate Knockout   |\n");
    printf("| 11. Dota 2                         |\n");
    printf("| 12. Apex Legends                   |\n");
    printf("| 13. Counter-Strike 2               |\n");
    printf("| 14. Palworld                       |\n");
    printf("| 15. Tekken 8                       |\n");
    printf("| 16. Elden Ring                     |\n");
    printf("| 17. Destiny 2                      |\n");
    printf("| 18. Rust                           |\n");
    printf("| 19. Monster Hunter: World          |\n");
    printf("| 20. Supermarket: toko berguna      |\n");
    printf("| ---------------------------------- |\n");
    
    
    
}




// untuk menambahkan game ke cart
/*
struct Game game
struct CartItem cart[]
adalah variabel struct

int *cartSize 
adalah variabel pointer dengan tipe data int
*/




void addToCart(struct Game game, struct CartItem cart[], int *cartSize) {
    
    
    
    cart[*cartSize].game = game;
    *cartSize += 1;
    
    
    
}




// menampilkan nota
void displayReceipt(struct CartItem cart[], int cartSize) {
    
    
    
    
    printf("| ----------------------------------- \n");
    printf("|          Nota Pembelian Anda:       \n");
    printf("| ----------------------------------- \n");
    
    printf("| ----------------------------------- \n");
    printf("|             No   |  Game            \n");
    printf("| ----------------------------------- \n");
    for (int i = 0; i < cartSize; i++) {
    printf("              %d    |  %s               \n", i + 1, cart[i].game.title);        
        }
    printf("| ----------------------------------- \n");


    
    
}





int main() {
    // system("color 0b");



    printf("\t\t\t\t\t\t╔═══╗╔═══╗─────────╔═══╦╗\n");
    printf("\t\t\t\t\t\t║╔═╗║║╔═╗║─────────║╔═╗║║\n");
    printf("\t\t\t\t\t\t║║─╚╝║║─╚╬══╦╗╔╦══╗║╚══╣╚═╦══╦══╗\n");
    printf("\t\t\t\t\t\t║║─╔╗║║╔═╣╔╗║╚╝║║═╣╚══╗║╔╗║╔╗║╔╗║\n");
    printf("\t\t\t\t\t\t║╚═╝║║╚╩═║╔╗║║║║║═╣║╚═╝║║║║╚╝║╚╝║\n");
    printf("\t\t\t\t\t\t╚═══╝╚═══╩╝╚╩╩╩╩══╝╚═══╩╝╚╩══╣╔═╝\n");
    printf("\t\t\t\t\t\t─────────────────────────────║║\n");
    printf("\t\t\t\t\t\t─────────────────────────────╚╝\n\n");
    
    
    
    
    
    
    printf("\t\t\t\t\t\t██╗    ██╗███████╗██╗      ██████╗ ██████╗ ███╗   ███╗███████╗        \n");
    printf("\t\t\t\t\t\t██║    ██║██╔════╝██║     ██╔════╝██╔═══██╗████╗ ████║██╔════╝        \n");
    printf("\t\t\t\t\t\t██║ █╗ ██║█████╗  ██║     ██║     ██║   ██║██╔████╔██║█████╗          \n");
    printf("\t\t\t\t\t\t██║███╗██║██╔══╝  ██║     ██║     ██║   ██║██║╚██╔╝██║██╔══╝          \n");
    printf("\t\t\t\t\t\t╚███╔███╔╝███████╗███████╗╚██████╗╚██████╔╝██║ ╚═╝ ██║███████╗        \n");
    printf("\t\t\t\t\t\t ╚══╝╚══╝ ╚══════╝╚══════╝ ╚═════╝ ╚═════╝ ╚═╝     ╚═╝╚══════╝        \n");
    printf("\t\t\t\t\t\t████████╗ ██████╗      ██████╗     ██████╗  █████╗ ███╗   ███╗███████╗\n");
    printf("\t\t\t\t\t\t╚══██╔══╝██╔═══██╗    ██╔════╝    ██╔════╝ ██╔══██╗████╗ ████║██╔════╝\n");
    printf("\t\t\t\t\t\t   ██║   ██║   ██║    ██║         ██║  ███╗███████║██╔████╔██║█████╗  \n");
    printf("\t\t\t\t\t\t   ██║   ██║   ██║    ██║         ██║   ██║██╔══██║██║╚██╔╝██║██╔══╝  \n");
    printf("\t\t\t\t\t\t   ██║   ╚██████╔╝    ╚██████╗    ╚██████╔╝██║  ██║██║ ╚═╝ ██║███████╗\n");
    printf("\t\t\t\t\t\t   ╚═╝    ╚═════╝      ╚═════╝     ╚═════╝ ╚═╝  ╚═╝╚═╝     ╚═╝╚══════╝\n");
    printf("\t\t\t\t\t\t███████╗██╗  ██╗ ██████╗ ██████╗      ███╗  ███╗                      \n");
    printf("\t\t\t\t\t\t██╔════╝██║  ██║██╔═══██╗██╔══██╗    ██╔██╗██╔██╗                     \n");
    printf("\t\t\t\t\t\t███████╗███████║██║   ██║██████╔╝    ╚═╝╚═╝╚═╝╚═╝                     \n");
    printf("\t\t\t\t\t\t╚════██║██╔══██║██║   ██║██╔═══╝                                      \n");
    printf("\t\t\t\t\t\t███████║██║  ██║╚██████╔╝██║         ███████╗███████╗                 \n");
    printf("\t\t\t\t\t\t╚══════╝╚═╝  ╚═╝ ╚═════╝ ╚═╝         ╚══════╝╚══════╝                 \n\n\n");
    
    
    
    
    printf("\t\t\t\t\t\t████████╗ ██████╗ ██╗  ██╗ ██████╗                         \n");
    printf("\t\t\t\t\t\t╚══██╔══╝██╔═══██╗██║ ██╔╝██╔═══██╗                        \n");
    printf("\t\t\t\t\t\t   ██║   ██║   ██║█████╔╝ ██║   ██║                        \n");
    printf("\t\t\t\t\t\t   ██║   ██║   ██║██╔═██╗ ██║   ██║                        \n");
    printf("\t\t\t\t\t\t   ██║   ╚██████╔╝██║  ██╗╚██████╔╝                        \n");
    printf("\t\t\t\t\t\t   ╚═╝    ╚═════╝ ╚═╝  ╚═╝ ╚═════╝                         \n");
    printf("                                                           \n");
    printf("\t\t\t\t\t\t███████╗███████╗██████╗ ██████╗  █████╗                    \n");
    printf("\t\t\t\t\t\t██╔════╝██╔════╝██╔══██╗██╔══██╗██╔══██╗                   \n");
    printf("\t\t\t\t\t\t███████╗█████╗  ██████╔╝██████╔╝███████║                   \n");
    printf("\t\t\t\t\t\t╚════██║██╔══╝  ██╔══██╗██╔══██╗██╔══██║                   \n");
    printf("\t\t\t\t\t\t███████║███████╗██║  ██║██████╔╝██║  ██║                   \n");
    printf("\t\t\t\t\t\t╚══════╝╚══════╝╚═╝  ╚═╝╚═════╝ ╚═╝  ╚═╝                   \n");
    printf("                                                           \n");
    printf("\t\t\t\t\t\t██████╗ ██████╗  ██╗ ██████╗     ██████╗  ██████╗  ██████╗ \n");
    printf("\t\t\t\t\t\t██╔══██╗██╔══██╗███║██╔═████╗   ██╔═████╗██╔═████╗██╔═████╗\n");
    printf("\t\t\t\t\t\t██████╔╝██████╔╝╚██║██║██╔██║   ██║██╔██║██║██╔██║██║██╔██║\n");
    printf("\t\t\t\t\t\t██╔══██╗██╔═══╝  ██║████╔╝██║   ████╔╝██║████╔╝██║████╔╝██║\n");
    printf("\t\t\t\t\t\t██║  ██║██║██╗   ██║╚██████╔╝██╗╚██████╔╝╚██████╔╝╚██████╔╝\n");
    printf("\t\t\t\t\t\t╚═╝  ╚═╝╚═╝╚═╝   ╚═╝ ╚═════╝ ╚═╝ ╚═════╝  ╚═════╝  ╚═════╝ \n\n\n");
    




    //Start Penampil Judul

    int i, j;
    int rows = 5;
    int cols = 13;





    char c_game_shop[5][13] = {
        {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
        {'*', 'B', 'Y', ' ', 'P', 'A', 'N', 'J', 'I', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', 'A', 'G', 'U', 'S', ' ', 'D', '.', ' ', '*'},
        {'*', ' ', ' ', ' ', 'N', 'A', 'N', 'D', 'A', ' ', ' ', ' ', '*'},
        {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'}
    };
    
    
    
    

    //End Penampil Judul

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%c ", c_game_shop[i][j]);
        }
        printf("\n");
    }
    
    
    
    

    struct User user;
    char fixPassword[] = "C Game Shop";
    struct CartItem cart[20];
    int cartSize = 0;
    
    
    
    
    
    printf("\n\n\n");
    
    printf("\t\t\t\t\t\t███╗   ███╗ █████╗ ███████╗██╗   ██╗██╗  ██╗██╗  ██╗ █████╗ ███╗   ██╗\n");
    printf("\t\t\t\t\t\t████╗ ████║██╔══██╗██╔════╝██║   ██║██║ ██╔╝██║ ██╔╝██╔══██╗████╗  ██║\n");
    printf("\t\t\t\t\t\t██╔████╔██║███████║███████╗██║   ██║█████╔╝ █████╔╝ ███████║██╔██╗ ██║\n");
    printf("\t\t\t\t\t\t██║╚██╔╝██║██╔══██║╚════██║██║   ██║██╔═██╗ ██╔═██╗ ██╔══██║██║╚██╗██║\n");
    printf("\t\t\t\t\t\t██║ ╚═╝ ██║██║  ██║███████║╚██████╔╝██║  ██╗██║  ██╗██║  ██║██║ ╚████║\n");
    printf("\t\t\t\t\t\t╚═╝     ╚═╝╚═╝  ╚═╝╚══════╝ ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝\n");
    printf("\t\t\t\t\t\t███████╗███╗   ███╗ █████╗ ██╗██╗\n");
    printf("\t\t\t\t\t\t██╔════╝████╗ ████║██╔══██╗██║██║\n");
    printf("\t\t\t\t\t\t█████╗  ██╔████╔██║███████║██║██║\n");
    printf("\t\t\t\t\t\t██╔══╝  ██║╚██╔╝██║██╔══██║██║██║\n");
    printf("\t\t\t\t\t\t███████╗██║ ╚═╝ ██║██║  ██║██║███████╗\n");
    printf("\t\t\t\t\t\t╚══════╝╚═╝     ╚═╝╚═╝  ╚═╝╚═╝╚══════╝\n\n\n");
    
    
    
    

    printf("| ---------------- \n");
    printf("| Masukkan Email: ");
    fgets(user.email, sizeof(user.email), stdin);
    user.email[strcspn(user.email, "\n")] = '\0';
    printf("| ---------------- \n\n\n");
    
    
    
    
    
    
    printf("\t\t\t\t\t\t███╗   ███╗ █████╗ ███████╗██╗   ██╗██╗  ██╗██╗  ██╗ █████╗ ███╗   ██╗\n");
    printf("\t\t\t\t\t\t████╗ ████║██╔══██╗██╔════╝██║   ██║██║ ██╔╝██║ ██╔╝██╔══██╗████╗  ██║\n");
    printf("\t\t\t\t\t\t██╔████╔██║███████║███████╗██║   ██║█████╔╝ █████╔╝ ███████║██╔██╗ ██║\n");
    printf("\t\t\t\t\t\t██║╚██╔╝██║██╔══██║╚════██║██║   ██║██╔═██╗ ██╔═██╗ ██╔══██║██║╚██╗██║\n");
    printf("\t\t\t\t\t\t██║ ╚═╝ ██║██║  ██║███████║╚██████╔╝██║  ██╗██║  ██╗██║  ██║██║ ╚████║\n");
    printf("\t\t\t\t\t\t╚═╝     ╚═╝╚═╝  ╚═╝╚══════╝ ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝\n");
    printf("\t\t\t\t\t\t██████╗  █████╗ ███████╗███████╗██╗    ██╗ ██████╗ ██████╗ ██████╗    \n");
    printf("\t\t\t\t\t\t██╔══██╗██╔══██╗██╔════╝██╔════╝██║    ██║██╔═══██╗██╔══██╗██╔══██╗   \n");
    printf("\t\t\t\t\t\t██████╔╝███████║███████╗███████╗██║ █╗ ██║██║   ██║██████╔╝██║  ██║   \n");
    printf("\t\t\t\t\t\t██╔═══╝ ██╔══██║╚════██║╚════██║██║███╗██║██║   ██║██╔══██╗██║  ██║   \n");
    printf("\t\t\t\t\t\t██║     ██║  ██║███████║███████║╚███╔███╔╝╚██████╔╝██║  ██║██████╔╝   \n");
    printf("\t\t\t\t\t\t╚═╝     ╚═╝  ╚═╝╚══════╝╚══════╝ ╚══╝╚══╝  ╚═════╝ ╚═╝  ╚═╝╚═════╝    \n\n\n");
    
    
    
    
    
    printf("\n| ---------------- \n");
    printf("| Masukkan password: ");
    fgets(user.password, sizeof(user.password), stdin);
    user.password[strcspn(user.password, "\n")] = '\0';
    printf("| ---------------- \n\n\n");
    
    
    
    

    if (strcmp(user.password, fixPassword) == 0) {
        
        
        
        
        
        
    printf("\n\n\n+----------------------------------------------------------------+\n");
    printf("| _                _         ____            _               _ _ |\n");
    printf("|| |    ___   __ _(_)_ __   | __ )  ___ _ __| |__   __ _ ___(_) ||\n");
    printf("|| |   / _ \\ / _` | | '_ \\  |  _ \\ / _ \\ '__| '_ \\ / _` / __| | ||\n");
    printf("|| |__| (_) | (_| | | | | | | |_) |  __/ |  | | | | (_| \\__ \\ | ||\n");
    printf("||_____|\\___/ \\__, |_|_| |_| |____/ \\___|_|  |_| |_|\\__,_|___/_|_|\n");
    printf("|            |___/                                               |\n");
    printf("+----------------------------------------------------------------+\n\n\n");






        displayRecommendedGames();
        
        
        
        
        

        char choice;
        do {
            
            printf("\n\n\n+---------------------------------------------------------------+\n");
            printf("|  ____                                                         |\n");
            printf("| / ___| __ _ _ __ ___   ___                                    |\n");
            printf("|| |  _ / _` | '_ ` _ \\ / _ \\                                   |\n");
            printf("|| |_| | (_| | | | | | |  __/                                   |\n");
            printf("| \\____|\\__,_|_| |_| |_|\\___|                                   |\n");
            printf("|          _                                  _           _ ___ |\n");
            printf("| _ __ ___| | _____  _ __ ___   ___ _ __   __| | __ _ ___(_)__ \\|\n");
            printf("|| '__/ _ \\ |/ / _ \\| '_ ` _ \\ / _ \\ '_ \\ / _` |/ _` / __| | / /|\n");
            printf("|| | |  __/   < (_) | | | | | |  __/ | | | (_| | (_| \\__ \\ ||_| |\n");
            printf("||_|  \\___|_|\\_\\___/|_| |_| |_|\\___|_| |_|\\__,_|\\__,_|___/_|(_) |\n");
            printf("+---------------------------------------------------------------+\n\n\n");
            
            
            
            
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
                    {"Fall Guys: Ultimate Knockout"},
                    {"Dota 2"},
                    {"Apex Legends"},
                    {"Counter-Strike 2"},
                    {"Palworld"},
                    {"Tekken 8"},
                    {"Elden Ring"},
                    {"Destiny 2"},
                    {"Rust"},
                    {"Monster Hunter: World"},
                    {"Supermarket: toko berguna"}
                };
                
                
                
                

                if (gameNumber >= 1 && gameNumber <= 20) {



                    addToCart(recommendedGames[gameNumber - 1], cart, &cartSize);
                    printf("Game telah ditambahkan ke keranjang.\n");
                    
                    
                    

                } else {
                    
                    
                    printf("Nomor game tidak valid.\n");
                    
                    
                }
                
                
                
            } else {
                
                
                printf("\n\n\n+---------------------------------------------------------------------------+\n");
                printf("| __  __                 _    _                                             |\n");
                printf("||  \\/  | __ _ ___ _   _| | _| | ____ _ _ __    _ __   __ _ _ __ ___   __ _ |\n");
                printf("|| |\\/| |/ _` / __| | | | |/ / |/ / _` | '_ \\  | '_ \\ / _` | '_ ` _ \\ / _` ||\n");
                printf("|| |  | | (_| \\__ \\ |_| |   <|   < (_| | | | | | | | | (_| | | | | | | (_| ||\n");
                printf("||_|  |_|\\__,_|___/\\__,_|_|\\_\\_|\\_\\__,_|_| |_| |_| |_|\\__,_|_| |_| |_|\\__,_||\n");
                printf("|  __ _  __ _ _ __ ___   ___                                                |\n");
                printf("| / _` |/ _` | '_ ` _ \\ / _ \\                                               |\n");
                printf("|| (_| | (_| | | | | | |  __/                                               |\n");
                printf("| \\__, |\\__,_|_| |_| |_|\\___|                                               |\n");
                printf("| |___/                                                                     |\n");
                printf("+---------------------------------------------------------------------------+\n\n\n");
                
                
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


        

        printf("\n\n\n+-----------------------------------------------+\n");
        printf("| _  __                     _                   |\n");
        printf("|| |/ /___ _ __ __ _ _ __  (_) __ _ _ __   __ _ |\n");
        printf("|| ' // _ \\ '__/ _` | '_ \\ | |/ _` | '_ \\ / _` ||\n");
        printf("|| . \\  __/ | | (_| | | | || | (_| | | | | (_| ||\n");
        printf("||_|\\_\\___|_|  \\__,_|_| |_|/ |\\__,_|_| |_|\\__, ||\n");
        printf("| ____       _           |__/             |___/ |\n");
        printf("|| __ )  ___| | __ _ _ __  (_) __ _             |\n");
        printf("||  _ \\ / _ \\ |/ _` | '_ \\ | |/ _` |            |\n");
        printf("|| |_) |  __/ | (_| | | | || | (_| |            |\n");
        printf("||____/ \\___|_|\\__,_|_| |_|/ |\\__,_|            |\n");
        printf("|                        |__/                   |\n");
        printf("+-----------------------------------------------+\n\n\n");






        printf("|===============================\n");
        printf("|  Isi Keranjang Belanja Anda:  \n");
        for (int i = 0; i < cartSize; i++) {
        printf("|   %d. %s                      \n", i + 1, cart[i].game.title);
        }
        printf("|===============================\n\n\n");




        int pilihan;
        printf("| --------------------------- \n");
        printf("|   Pilih metode pembayaran:  \n");
        printf("|          1. Visa            \n");
        printf("|          2. MasterCard      \n");
        printf("|          3. Dana            \n");
        printf("|          4. Linkaja         \n");
        printf("| Masukkan pilihan Anda (1-4):  ");
        scanf("%d", &pilihan);
        getchar();
        printf("| --------------------------- \n\n\n");




       switch (pilihan) {
           
           
           
           
            case 1:
                {
                    int nomorKartuKredit, pin;

                    printf("| ----------------------------  \n");
                    printf("| Masukkan nomor kartu kredit: ");
                    scanf("%d", &nomorKartuKredit);
                    printf("| ----------------------------  \n");

                    printf("\n| -----------  \n");
                    printf("| Masukkan PIN: ");
                    scanf("%d", &pin);
                    printf("| -----------  \n");

                    printf("\nPembayaran dengan Visa berhasil!\n");

                    displayReceipt(cart, cartSize); 

                    break;
                }
                
                
                
                
            case 2:
                {
                    int nomorKartuKredit, pin;

                    printf("| ----------------------------  \n");
                    printf("| Masukkan nomor kartu kredit: ");
                    scanf("%d", &nomorKartuKredit);
                    printf("| ----------------------------  \n");

                    printf("\n| -----------  \n");
                    printf("Masukkan PIN: ");
                    scanf("%d", &pin);
                    printf("| -----------  \n");

                    printf("\nPembayaran dengan MasterCard berhasil!\n");

                    displayReceipt(cart, cartSize); 

                    break;
                }
            case 3:
                {
                    char email[100], password[100];
                    int nomorTelepon;

                    printf("| ----------------  \n");
                    printf("| Masukkan email: ");
                    scanf("%s", email);
                    printf("| ----------------  \n");

                    printf("\n| -----------------  \n");
                    printf("| Masukkan password: ");
                    scanf("%s", password);
                    printf("| -----------------  \n");

                    printf("\n| ----------------------  \n");
                    printf("| Masukkan nomor telepon: ");
                    scanf("%d", &nomorTelepon);
                    printf("| ----------------------  \n");

                    printf("\nPembayaran dengan Dana berhasil!\n");

                    displayReceipt(cart, cartSize); 

                    break;
                }
            case 4:
                {
                    char email[100], password[100];
                    int nomorTelepon;

                    printf("| ----------------  \n");
                    printf("| Masukkan email: ");
                    scanf("%s", email);
                    printf("| ---------------- \n");

                    printf("\n| ----------------- \n");
                    printf("| Masukkan password: ");
                    scanf("%s", password);
                    printf("| ----------------- \n");

                    printf("\n| ---------------------- \n");
                    printf("| Masukkan nomor telepon: ");
                    scanf("%d", &nomorTelepon);
                    printf("| ---------------------- \n");

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
        printf("\nLogin gagal. Pastikan input password atau email anda sudah benar!\n");
    }

    return 0;
}

 


