#include <stdio.h>

int main (){
    float sal;
    scanf("%f", &sal);
    if(sal <= 1000.0){
        printf("%.2f", (sal * 1.2));
    }
    if(sal > 1000.0 && sal <= 1500.0){
        printf("%.2f", (sal * 1.15));
    }
    if(sal > 1000.0 && sal <= 2000.0){
        printf("%.2f", (sal * 1.1));
    }
    if(sal > 2000.0){
        printf("%.2f", (sal * 1.05));
    }
    return 0;
}