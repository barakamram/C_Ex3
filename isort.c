#include <stdio.h>
#include <string.h>
#include "isort.h"
#define ArrSize 50


void shift_element(int *arr,int i){
  int Arr = *(arr+i);
  for (int *k = (arr + i); k > arr; k--){
    *(k) = *(k-1);
  }
  *arr = Arr;
}

void insertion_sort(int *arr,int len){
  for(int *i = arr+1; i <arr+len; i++) {
    int *k = i-1;
    while( k >= arr){
      if (*(k+1) < *k){
        int temp = *(k+1);
        shift_element(k,1);
        *k=temp;
      }
      k--;
    }
  }
}

int main(){
  int Arr[ArrSize];
  int count=0;
  printf("please insert 50 numbers:\n");
  while (count < ArrSize){
    scanf("%d", Arr+count);
    count++;
  }
  insertion_sort(Arr,ArrSize);
  int i = 0;
  for (i=0; i < ArrSize-1; i++) {
    printf("%d," , *(Arr+i));
  }
  printf("%d\n" , *(Arr+i));
  return 0;

}
