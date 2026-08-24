#include <stdio.h>

int main(){
    int num = 10;
    int *int_ptr = &num;
    printf("%d\n%d\n", num, int_ptr);
    //*int_ptr -> 10;
    // int_ptr -> 6422296;

    //& -> referênciação (calcula o endereço de memória)
    //* -> desreferênciação (acessa o valor do endereço)
}