#include <studio.h>
#include "isort.h"

void shift_element(int* arr, int i){
    int jump = 1;
    while (int j; j<i ,j++){
    int temp = *(arr+ jump);
    *(arr+ jump) = *arr;
    *arr = temp;
    jump++;
    }

void insertion_sort(int* arr , int len){
	int *i;
	int *last = arr + len;
	for(i = arr + 1; i < last; i++)
		if(*i < *(i-1))
			shift_element(arr, i);
    }
}