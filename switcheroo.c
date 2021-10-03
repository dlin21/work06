#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  //#1
  int arr[10];

  //#2
  arr[0] = 0;

  //#3
  int i;
  srand(time(NULL));
  for(i=1; i<10; i++){
    arr[i] = rand();
  }

  //#4
  printf("4\n");
  int j;
  for(j=0; j<10; j++){
    printf("index %d: %d \n", j, arr[j]);
  }
  printf("\n");

  //#5
  int arr1[10];

  //#6
  int* ap = arr;
  int* ap1 = arr1;

  //#7
  printf("7\n");
  int k;
  for(k=0; k<10; k++){
    *(ap1+k) = *(ap+9-k);
  }
  int l;
  for(l=0; l<10; l++){
    printf("index %d of arr1: %d \n", l, arr1[l]);
  }

  return 0;
}