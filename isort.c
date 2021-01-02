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
      // *(arr +i +k) = *(arr+k);
      k--;
    }
  }
}

int main(){
    int arr[ArrSize]={0};
    int x;
    int i=0;
    printf("Please enter 50 numbers\n");
    while(i<ArrSize){
        if(scanf("%d",&x)==1){
            *(arr+i)=x;
            i++;
        }
    }
    int* pointer=arr;
    insertion_sort(pointer,ArrSize);
    for(int i=0;i<ArrSize;i++){
        if(i==ArrSize-1){printf("%d",*(arr+i));}
        else{printf("%d,",*(arr+i));}
    }
    return 1;
}
