#include <studio.h>
#include "isort.h"
#define NUMBERS 50

void shift_element(int* arr, int i){
    int jump = 1;
    while (int j; j<i ,j++){
    int temp = *(arr+ jump);
    *(arr+ jump) = *arr;
    *arr = temp;
    jump++;
    }

void insertion_sort(int* arr , int len){
    if(arr != null){
	    int *i;
	    int *last = arr + len;
	    for(i = arr + 1; i < last; i++)
		if(*i < *(i-1))
			shift_element(arr, i);
			}
    }
}
int main(){
    int arr[NUMBERS]={0};
    int x;
    int i=0;
    printf("Your limit is 50 numbers\n");
    while(i<NUMBERS){
        if(scanf("%d",&x)==1){
            *(arr+i)=x;
            i++;
        }
    }
    int* pointer=arr;
    insertion_sort(pointer,NUMBERS);
    for(int i=0;i<NUMBERS;i++){
        if(i==NUMBERS-1){printf("%d",*(arr+i));}
        else{printf("%d,",*(arr+i));}
    }
    return 1;
}