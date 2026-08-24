#include <stdio.h>

int main(){

    float p1, p2, p3, trab, final;
    scanf("%f %f %f %f", &p1, &p2, &p3, &trab);
    if(p1 <= p2 && p1 <= p3){
        p1 = 0;
    } else if(p2 <= p1 && p2 <= p3){
        p2 = 0;
    } else {
        p3 = 0;
    }
    
    final = (p1 + p2 + p3 + trab)/3;
    if(final < 7.0){
        printf("Final com %.1f\n", final);
    }else{
        printf("Aprovado com %.1f\n", final);
    }
    
    return 0;
}