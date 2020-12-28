


void shift_element(int* arr, int i){
    int [] array = new int[array.length+i];
    int jump =4;
    while (int j; j<i ,j++){
    int temp = *(arr+ jump);
    *(arr+jump) = *arr;
    *arr = temp;
    jump+4;
    }


}