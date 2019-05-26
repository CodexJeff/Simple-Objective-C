#include <stdio.h>

int main(){
  float costHenry = 0.66;
  float costCrisp = 0.80;
  float costAero = 0.60;
  float costSmart = 0.70;
  float costCrunchie = 0.75;

  int numHenry, numCrisp, numAero, numSmart, numCrunchie;

  printf("1. Oh Henry         $%.2f\n",costHenry);
  printf("2. Coffee Crisp     $%.2f\n",costCrisp);
  printf("3. Aero             $%.2f\n",costAero);
  printf("4. Smarties         $%.2f\n",costSmart);
  printf("5. Crunchie         $%.2f\n\n",costCrunchie);

  printf("How many boxes of Oh Henry bars would you like (48 bars per box)?\n");
  scanf("%d", &numHenry);
  printf("How many boxes of Coffee Crip bars would you like (48 bars per box)?\n");
  scanf("%d", &numCrisp);
  printf("How many boxes of Aero bars would you like (48 bars per box)?\n");
  scanf("%d", &numAero);
  printf("How many boxes of Smarties would you like (48 bars per box)?\n");
  scanf("%d", &numSmart);
  printf("How many boxes of Crunchie bars would you like (48 bars per box)?\n");
  scanf("%d", &numCrunchie);

  printf("\n%3d boxes of Oh Henry      (%.2f x 48) = $%8.2f", numHenry, costHenry, numHenry*costHenry*48);
  printf("\n%3d boxes of Coffee Crisp  (%.2f x 48) = $%8.2f", numCrisp, costCrisp, numCrisp*costCrisp*48);
  printf("\n%3d boxes of Aero          (%.2f x 48) = $%8.2f", numAero, costAero, numAero*costAero*48);
  printf("\n%3d boxes of Smarties      (%.2f x 48) = $%8.2f", numSmart, costSmart, numSmart*costSmart*48);
  printf("\n%3d boxes of Crunchie      (%.2f x 48) = $%8.2f\n", numCrunchie, costCrunchie, numCrunchie*costCrunchie*48);
  printf("--------------------------------------------------\n");
  printf("   Sub Total                           = $%8.2f\n",numHenry*costHenry*48 + numCrisp*costCrisp*48 + numAero*costAero*48 + numSmart*costSmart*48 + numCrunchie*costCrunchie*48);
  printf("   HST                                 = $%8.2f\n",(numHenry*costHenry*48 + numCrisp*costCrisp*48 + numAero*costAero*48 + numSmart*costSmart*48 + numCrunchie*costCrunchie*48)*0.13);
  printf("==================================================\n");
  printf("Amount Due                             = $%8.2f\n",(numHenry*costHenry*48 + numCrisp*costCrisp*48 + numAero*costAero*48 + numSmart*costSmart*48 + numCrunchie*costCrunchie*48)*1.13);
  return 0;
}
