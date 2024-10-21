#include <iostream>
#include <string>


using namespace std;

void DisplayGame(string displayCards[], int size) {
   int i = 0;
   for (i = 0, i < size, i++) {
      cout << "[" << displayCards[i] << "] " << endl;
      }
}

int main() {
   // Declares Variables
   int health = 10;
   int cardCount = 5;
   string action;
   string cards[cardCount];
   
   cout << "Welcome to the Chill Corner, a rouguelike created by ShootingTheBrez!" << endl;

   while (health > 0) {
      for (i = 0, i < cardCount, i++) {
         cards[i] = rand() % 10 + 1;
         }
      DisplayGame(cards, cardCount);
      cin >> action;
      if (action == "quit") {
         health = 0;
      }
   }
   
   return 0;
}
