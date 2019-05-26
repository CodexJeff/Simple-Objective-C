#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  char arr [100];
  int arr2 [10];
  int max = 0;
  srand(time(NULL));

  for (char i = 0; i < 100; i++) {
    arr[i] = rand() % 10;
  }

  for (char j = 0; j < 10; j++) {
    int count = 0;
    for (char k = 0; k < 100; k++) {
      if(j == arr[k]){
        count = count + 1;
      }
      arr2[j] = count;
    }
  }
  for (int l = 0; l < 10; l++) {
    if (arr2[l] > max){
      max = arr2[l];
    }
  }

  for (int m = max; m > 0; m--) {
    printf(" %2d| ", m);
    for (int n = 0; n < 10; n++) {
      if (max <= arr2[n]){
        printf("* ");
      }
      else{
        printf("  ");
      }
    }
    max--;
    printf("\n");
  }

  printf("     -------------------\n");
  printf("     0 1 2 3 4 5 6 7 8 9\n");
  return (0);
}
