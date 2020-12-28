


void shift_element(int* arr, int i){
    int jump = 1;
    while (int j; j<i ,j++){
    int temp = *(arr+ jump);
    *(arr+ jump) = *arr;
    *arr = temp;
    jump++;
    }


}