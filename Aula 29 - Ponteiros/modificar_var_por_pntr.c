#include <stdio.h>

int main(){
    int num = 10;
    int *int_ptr = &num;
    printf("%d\n", num);
    *int_ptr = 20;
    printf("%d\n", num);
    
}