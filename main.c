#include <studio.h>
#include "shift_element.c"

int main (){
    int a[] = {1,2,3,4,5,1,2,3}
    int i =3
    int *arr = 3;
    shift_elements(*arr, i);

    int arr[5] = {99, 78, -1, 42, 12};
	int n = sizeof(arr)/sizeof(int);

	insertion_sort(&arr[0], n);

}