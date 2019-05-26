#include <stdio.h>

int calculate (int, int, int, int, int, int, int, int);

int main (){
  int aX, aY, bX, bY, cX, cY, dX, dY;

  printf("This program wil determine if two 2D line segments on the same grid will\nintersect. Please enter the coordinates for the two lines when prompted.\n\n");

  printf("What is the x-coordinate integer for THE BEGINNING OF LINE SEGMENT 1? ");
  scanf("%d", &aX);
  printf("What is the y-coordinate integer for THE BEGINNING OF LINE SEGMENT 1? ");
  scanf("%d", &aY);
  printf("What is the x-coordinate integer for THE END OF LINE SEGMENT 1? ");
  scanf("%d", &bX);
  printf("What is the y-coordinate integer for THE END OF LINE SEGMENT 1? ");
  scanf("%d", &bY);

  printf("What is the x-coordinate integer for THE BEGINNING OF LINE SEGMENT 2? ");
  scanf("%d", &cX);
  printf("What is the y-coordinate integer for THE BEGINNING OF LINE SEGMENT 2? ");
  scanf("%d", &cY);
  printf("What is the x-coordinate integer for THE END OF LINE SEGMENT 2? ");
  scanf("%d", &dX);
  printf("What is the y-coordinate integer for THE END OF LINE SEGMENT 2? ");
  scanf("%d", &dY);

  calculate(aX, aY, bX, bY, cX, cY, dX, dY);
  return 0;
}

int calculate (int aX, int aY, int bX, int bY, int cX, int cY, int dX, int dY){
  double t = (double) (((aX-cX)*(cY-dY))-((aY-cY)*(cX-dX)))/(((aX-bX)*(cY-dY))-((aY-bY)*(cX-dX)));
  double u = (double) (((bX-aX)*(aY-cY))+((aY-bY)*(aX-cX)))/(((aX-bX)*(cY-dY))-((aY-bY)*(cX-dX)));
  if ((t >= 0 && t <=1 && u >=0 && u <= 1) || (aX == bX && bX == cX && cX == dX && dY >= bY && dY <= aY) || (aX == bX && bX == cX && cX == dX && cY >= bY && cY <= aY) || (aY == bY && bY == cY && cY == dY && dX <= bX && dX >= aX) || (aY == bY && bY == cY && cY == dY && cX <= bX && cX >= aX)){
    printf("\nLine segments (%d,%d)->(%d,%d) and (%d,%d)->(%d,%d) intersect.\n",aX, aY, bX, bY, cX, cY, dX, dY);
    return 1;
  }
  else{
    printf("\nLine segments (%d,%d)->(%d,%d) and (%d,%d)->(%d,%d) do not intersect.\n",aX, aY, bX, bY, cX, cY, dX, dY);
    return 0;
  }
}
