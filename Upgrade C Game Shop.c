#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

struct User
{
  char email[50];
  char password[50];
  char phoneNumber[20];
};

struct Game
{
  char title[100];
};

struct CartItem
{
  struct Game game;
};

void
loadingDisplay ()
{
  sleep (3);

  fflush (stdout);				// Flush the output buffer
  sleep (1);					// Wait for 1 second
  printf ("\r     \r");

  printf (" ");
  fflush (stdout);
}

void
displayRecommendedGames ()
{
  printf ("\t\t\t\t\t| ---------------------------------- |\n");
  printf ("\t\t\t\t\t|          Game Rekomendasi:         |\n");
  printf ("\t\t\t\t\t| ---------------------------------- |\n");
  printf ("\t\t\t\t\t| 1. The Witcher 3: Wild Hunt        |\n");
  printf ("\t\t\t\t\t| 2. Red Dead Redemption 2           |\n");
  printf ("\t\t\t\t\t| 3. Cyberpunk 2077                  |\n");
  printf ("\t\t\t\t\t| 4. Assassin's Creed Valhalla       |\n");
  printf ("\t\t\t\t\t| 5. Grand Theft Auto V              |\n");
  printf ("\t\t\t\t\t| 6. Sekiro: Shadows Die Twice       |\n");
  printf ("\t\t\t\t\t| 7. The Last of Us Part II          |\n");
  printf ("\t\t\t\t\t| 8. Doom Eternal                    |\n");
  printf ("\t\t\t\t\t| 9. Among Us                        |\n");
  printf ("\t\t\t\t\t| 10. Fall Guys: Ultimate Knockout   |\n");
  printf ("\t\t\t\t\t| 11. Dota 2                         |\n");
  printf ("\t\t\t\t\t| 12. Apex Legends                   |\n");
  printf ("\t\t\t\t\t| 13. Counter-Strike 2               |\n");
  printf ("\t\t\t\t\t| 14. Palworld                       |\n");
  printf ("\t\t\t\t\t| 15. Tekken 8                       |\n");
  printf ("\t\t\t\t\t| 16. Elden Ring                     |\n");
  printf ("\t\t\t\t\t| 17. Destiny 2                      |\n");
  printf ("\t\t\t\t\t| 18. Rust                           |\n");
  printf ("\t\t\t\t\t| 19. Monster Hunter: World          |\n");
  printf ("\t\t\t\t\t| 20. Supermarket: toko berguna      |\n");
  printf ("\t\t\t\t\t| ---------------------------------- |\n");

  printf ("\t\t\t\t\t+------------------------------------+\n");
  printf ("\t\t\t\t\t| Semua game baik rekomendasi        |\n");
  printf ("\t\t\t\t\t| ataupun non rekomendasi            |\n");
  printf ("\t\t\t\t\t| serba Rp.10.000,00                 |\n");
  printf ("\t\t\t\t\t+------------------------------------+\n");

}

void
addToCart (struct Game game, struct CartItem cart[], int *cartSize,
		   float *totalPrice)
{
  cart[*cartSize].game = game;
  *cartSize += 1;
  *totalPrice += 10000;			// Menambahkan 10000 ke total harga
}

void
displayReceipt (struct CartItem cart[], int cartSize, float totalPrice)
{
  printf ("\t\t\t\t\t| ----------------------------------- \n");
  printf ("\t\t\t\t\t|          Nota Pembelian Anda:       \n");
  printf ("\t\t\t\t\t| ----------------------------------- \n");
  printf ("\t\t\t\t\t| ----------------------------------- \n");
  printf ("\t\t\t\t\t|             No   |  Game            \n");
  printf ("\t\t\t\t\t| ----------------------------------- \n");
  for (int i = 0; i < cartSize; i++)
	{
	  printf ("\t\t\t\t\t              %d    |  %s               \n", i + 1,
			  cart[i].game.title);
	}
  printf ("\t\t\t\t\t| ----------------------------------- \n");
  printf ("\t\t\t\t\t| Total Harga: Rp. %.2f\n", totalPrice);	// Menampilkan total harga
}

float
calculateRemainingBalance (float balance, float totalPrice)
{
  float remainingBalance = balance - totalPrice;
  return remainingBalance;
}

void
displayPaymentOption ()
{

  printf ("\n\n\t\t\t\t\tPilihan Pembayaran:\n");
  printf ("\t\t\t\t\t1. Dana\n");
  printf ("\t\t\t\t\t2. LinkAja\n\n\n");

}

int
main ()
{
  struct User user;
  char fixPassword[] = "C Game Shop";
  struct CartItem cart[20];
  int cartSize = 0;
  float totalPrice = 0.0;


  printf
	("\t\t\t\t\t+--------------------------------------------------------------------------+\n");
  printf
	("\t\t\t\t\t|                                                                          |\n");
  printf
	("\t\t\t\t\t|                                                                          |\n");
  printf
	("\t\t\t\t\t|  bbb    bbbbbbbbbbbbbb      bbbbbbb bbbbbbb bbbb   bbbbbbbbbbbb          |\n");
  printf
	("\t\t\t\t\t|  bbb    bbbbbbbbbbbbbb     bbbbbbbbbbbbbbbbbbbbbb bbbbbbbbbbbbb          |\n");
  printf
	("\t\t\t\t\t|  bbb bb bbbbbbbbb  bbb     bbb     bbb   bbbbbbbbbbbbbbbbbbbb            |\n");
  printf
	("\t\t\t\t\t|  bbbbbbbbbbbbbbbb  bbb     bbb     bbb   bbbbbbbbbbbbbbbbbbbb            |\n");
  printf
	("\t\t\t\t\t|  bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb bbb bbbbbbbbbbb          |\n");
  printf
	("\t\t\t\t\t|   bbbbbbbb bbbbbbbbbbbbbbbb bbbbbbb bbbbbbb bbb     bbbbbbbbbbb          |\n");
  printf
	("\t\t\t\t\t|                                                                          |\n");
  printf
	("\t\t\t\t\t|  bbbbbbbbb bbbbbbb      bbbbbbb     bbbbbbb  bbbbbb bbbb   bbbbbbbbbbbb  |\n");
  printf
	("\t\t\t\t\t|  bbbbbbbbbbbbbbbbbb    bbbbbbbb    bbbbbbbb bbbbbbbbbbbbb bbbbbbbbbbbbb  |\n");
  printf
	("\t\t\t\t\t|     bbb   bbb   bbb    bbb         bbb  bbbbbbbbbbbbbbbbbbbbbbbbbbbbb    |\n");
  printf
	("\t\t\t\t\t|     bbb   bbb   bbb    bbb         bbb   bbbbbbbbbbbbbbbbbbbbbbbbbbbb    |\n");
  printf
	("\t\t\t\t\t|     bbb   bbbbbbbbb    bbbbbbbb    bbbbbbbbbbbb  bbbbbb bbb bbbbbbbbbbb  |\n");
  printf
	("\t\t\t\t\t|     bbb    bbbbbbb      bbbbbbb     bbbbbbb bbb  bbbbbb     bbbbbbbbbbb  |\n");
  printf
	("\t\t\t\t\t|                                                                          |\n");
  printf
	("\t\t\t\t\t|  bbbbbbbbbbb  bbb bbbbbbb bbbbbbb      bbbb  bbbb                        |\n");
  printf
	("\t\t\t\t\t|  bbbbbbbbbbb  bbbbbbbbbbbbbbbbbbbb    bbbbbbbbbbbb                       |\n");
  printf
	("\t\t\t\t\t|  bbbbbbbbbbbbbbbbbbb   bbbbbbbbbbb    bbbbbbbbbbbb                       |\n");
  printf
	("\t\t\t\t\t|  bbbbbbbbbbbbbbbbbbb   bbbbbbbbbb                                        |\n");
  printf
	("\t\t\t\t\t|  bbbbbbbbbbb  bbbbbbbbbbbbbbb         bbbbbbbb                           |\n");
  printf
	("\t\t\t\t\t|  bbbbbbbbbbb  bbb bbbbbbb bbb         bbbbbbbb                           |\n");
  printf
	("\t\t\t\t\t|                                                                          |\n");
  printf
	("\t\t\t\t\t|                                                                          |\n");
  printf
	("\t\t\t\t\t+--------------------------------------------------------------------------+\n");

  sleep (2);

  printf
	("\t\t\t\t\t+-----------------------------------------------------------------------------------+\n");
  printf
	("\t\t\t\t\t|                                                                                   |\n");
  printf
	("\t\t\t\t\t|                                                                                   |\n");
  printf
	("\t\t\t\t\t|  bbbb   bbbb bbbbbb bbbbbbbbbbb   bbbbbb  bbbbbb  bbb bbbbbb bbbb   bbb           |\n");
  printf
	("\t\t\t\t\t|  bbbbb bbbbbbbbbbbbbbbbbbbbbbbb   bbbbbb bbbbbbb bbbbbbbbbbbbbbbbb  bbb           |\n");
  printf
	("\t\t\t\t\t|  bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb   bbbbbbbbbb bbbbbbb bbbbbbbbbbbbbb bbb           |\n");
  printf
	("\t\t\t\t\t|  bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb   bbbbbbbbbb bbbbbbb bbbbbbbbbbbbbbbbbb           |\n");
  printf
	("\t\t\t\t\t|  bbb bbb bbbbbb  bbbbbbbbbbbbbbbbbbbbbbb  bbbbbb  bbbbbb  bbbbbb bbbbbb           |\n");
  printf
	("\t\t\t\t\t|  bbb     bbbbbb  bbbbbbbbbbb bbbbbbb bbb  bbbbbb  bbbbbb  bbbbbb  bbbbb           |\n");
  printf
	("\t\t\t\t\t|                                                                                   |\n");
  printf
	("\t\t\t\t\t|  bbbbbbbbbbbb   bbbb bbbbbb bbbbbb          bbbbbb bbbb   bbbbbbbbbb  bbbbbb      |\n");
  printf
	("\t\t\t\t\t|  bbbbbbbbbbbbb bbbbbbbbbbbbbbbbbbb         bbbbbbbbbbbbb  bbbbbbbbbbbbbbbbbbbbbb  |\n");
  printf
	("\t\t\t\t\t|  bbbbbb  bbbbbbbbbbbbbbbbbbbbbbbbb         bbbbbbbbbbbbbb bbbbbb  bbbbbbbbbbbbbb  |\n");
  printf
	("\t\t\t\t\t|  bbbbbb  bbbbbbbbbbbbbbbbbbbbbbbbb         bbbbbbbbbbbbbbbbbbbbb  bbbbbbbbbbbbbb  |\n");
  printf
	("\t\t\t\t\t|  bbbbbbbbbbb bbb bbbbbb  bbbbbbbbbbbbbb    bbb  bbbbbb bbbbbbbbbbbbbbbbb  bbbbbb  |\n");
  printf
	("\t\t\t\t\t|  bbbbbbbbbbb     bbbbbb  bbbbbbbbbbbbbb    bbb  bbbbbb  bbbbbbbbbbbb bbb  bbb     |\n");
  printf
	("\t\t\t\t\t|                                                                                   |\n");
  printf
	("\t\t\t\t\t|                                                                                   |\n");
  printf
	("\t\t\t\t\t+-----------------------------------------------------------------------------------+\n");

  printf (">> ");
  fgets (user.email, sizeof (user.email), stdin);
  user.email[strcspn (user.email, "\n")] = '\0';
  loadingDisplay ();


  printf
	("\t\t\t\t\t+--------------------------------------------------------------------------+\n");
  printf
	("\t\t\t\t\t|                                                                          |\n");
  printf
	("\t\t\t\t\t|                                                                          |\n");
  printf
	("\t\t\t\t\t|  bbbb   bbbb bbbbbb bbbbbbbbbbb   bbbbbb  bbbbbb  bbb bbbbbb bbbb   bbb  |\n");
  printf
	("\t\t\t\t\t|  bbbbb bbbbbbbbbbbbbbbbbbbbbbbb   bbbbbb bbbbbbb bbbbbbbbbbbbbbbbb  bbb  |\n");
  printf
	("\t\t\t\t\t|  bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb   bbbbbbbbbb bbbbbbb bbbbbbbbbbbbbb bbb  |\n");
  printf
	("\t\t\t\t\t|  bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb   bbbbbbbbbb bbbbbbb bbbbbbbbbbbbbbbbbb  |\n");
  printf
	("\t\t\t\t\t|  bbb bbb bbbbbb  bbbbbbbbbbbbbbbbbbbbbbb  bbbbbb  bbbbbb  bbbbbb bbbbbb  |\n");
  printf
	("\t\t\t\t\t|  bbb     bbbbbb  bbbbbbbbbbb bbbbbbb bbb  bbbbbb  bbbbbb  bbbbbb  bbbbb  |\n");
  printf
	("\t\t\t\t\t|                                                                          |\n");
  printf
	("\t\t\t\t\t|  bbbbbbb  bbbbbb bbbbbbbbbbbbbbbbbbb    bbb bbbbbbb bbbbbbb bbbbbbb      |\n");
  printf
	("\t\t\t\t\t|  bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb    bbbbbbbbbbbbbbbbbbbbbbbbbbbb     |\n");
  printf
	("\t\t\t\t\t|  bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb bb bbbbbb   bbbbbbbbbbbbbb  bbb     |\n");
  printf
	("\t\t\t\t\t|  bbbbbbb bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb   bbbbbbbbbbbbbb  bbb     |\n");
  printf
	("\t\t\t\t\t|  bbb     bbb  bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb  bbbbbbbbbbb     |\n");
  printf
	("\t\t\t\t\t|  bbb     bbb  bbbbbbbbbbbbbbbbbbb bbbbbbbb  bbbbbbb bbb  bbbbbbbbbb      |\n");
  printf
	("\t\t\t\t\t|                                                                          |\n");
  printf
	("\t\t\t\t\t|   bbbbbb bbbb   bbbbbbbbbb  bbbbbb                                       |\n");
  printf
	("\t\t\t\t\t|  bbbbbbbbbbbbb  bbbbbbbbbbbbbbbbbbbbbb                                   |\n");
  printf
	("\t\t\t\t\t|  bbbbbbbbbbbbbb bbbbbb  bbbbbbbbbbbbbb                                   |\n");
  printf
	("\t\t\t\t\t|  bbbbbbbbbbbbbbbbbbbbb  bbbbbbbbbbbbbb                                   |\n");
  printf
	("\t\t\t\t\t|  bbb  bbbbbb bbbbbbbbbbbbbbbbb  bbbbbb                                   |\n");
  printf
	("\t\t\t\t\t|  bbb  bbbbbb  bbbbbbbbbbbb bbb  bbb                                      |\n");
  printf
	("\t\t\t\t\t|                                                                          |\n");
  printf
	("\t\t\t\t\t|                                                                          |\n");
  printf
	("\t\t\t\t\t+--------------------------------------------------------------------------+\n");

  printf (">> ");
  fgets (user.password, sizeof (user.password), stdin);
  user.password[strcspn (user.password, "\n")] = '\0';
  loadingDisplay ();

  if (strcmp (user.password, fixPassword) == 0)
	{
	  char choice;
	  do
		{
		  displayRecommendedGames ();
		  sleep (3);

		  printf
			("\t\t\t\t\t+----------------------------------------------------------------------------------+\n");
		  printf
			("\t\t\t\t\t|                                                                                  |\n");
		  printf
			("\t\t\t\t\t|   bbbbbbb  bbbbbb bbbb   bbbbbbbbbbbb                                            |\n");
		  printf
			("\t\t\t\t\t|  bbbbbbbb bbbbbbbbbbbbb bbbbbbbbbbbbb                                            |\n");
		  printf
			("\t\t\t\t\t|  bbb  bbbbbbbbbbbbbbbbbbbbbbbbbbbbb                                              |\n");
		  printf
			("\t\t\t\t\t|  bbb   bbbbbbbbbbbbbbbbbbbbbbbbbbbb                                              |\n");
		  printf
			("\t\t\t\t\t|  bbbbbbbbbbbb  bbbbbb bbb bbbbbbbbbbb                                            |\n");
		  printf
			("\t\t\t\t\t|   bbbbbbb bbb  bbbbbb     bbbbbbbbbbb                                            |\n");
		  printf
			("\t\t\t\t\t|                                                                                  |\n");
		  printf
			("\t\t\t\t\t|  bbbbbbb bbbbbbbbbbb  bbb bbbbbbb bbbb   bbbbbbbbbbbbbbbb   bbbbbbbbbb  bbbbbb   |\n");
		  printf
			("\t\t\t\t\t|  bbbbbbbbbbbbbbbbbbb bbbbbbbbbbbbbbbbbb bbbbbbbbbbbbbbbbbb  bbbbbbbbbbbbbbbbbbb  |\n");
		  printf
			("\t\t\t\t\t|  bbbbbbbbbbbbbb  bbbbbbb bbb   bbbbbbbbbbbbbbbbbbbb  bbbbbb bbbbbb  bbbbbbbbbbb  |\n");
		  printf
			("\t\t\t\t\t|  bbbbbbbbbbbbbb  bbbbbbb bbb   bbbbbbbbbbbbbbbbbbbb  bbbbbbbbbbbbb  bbbbbbbbbbb  |\n");
		  printf
			("\t\t\t\t\t|  bbb  bbbbbbbbbbbbbb  bbbbbbbbbbbbbbb bbb bbbbbbbbbbbbbb bbbbbbbbbbbbbbbbb  bbb  |\n");
		  printf
			("\t\t\t\t\t|  bbb  bbbbbbbbbbbbbb  bbb bbbbbbb bbb     bbbbbbbbbbbbbb  bbbbbbbbbbbb bbb  bbb  |\n");
		  printf
			("\t\t\t\t\t|                                                                                  |\n");
		  printf
			("\t\t\t\t\t|  bbbbbbbbbbbbbbbbbb                                                              |\n");
		  printf
			("\t\t\t\t\t|  bbbbbbbbbbbbbbbbbbb                                                             |\n");
		  printf
			("\t\t\t\t\t|  bbbbbbbbbbb  bbbbbb                                                             |\n");
		  printf
			("\t\t\t\t\t|  bbbbbbbbbbb  b
