#include <stdio.h>

int main(){
    int a, b, q, r = 0; 
    char n;
    scanf("%d %d %d", &a, &b, &q);
    for(int i =0; i < q; i++){
    
        scanf(" %c", &n);
        if(n == 'c' || n == 'v'){ r+=4;}
        if(n == 'g'){r+=2;}
    }

    a-=r;
    b-=r;
    if(a < 0){
        a *= (-1);
    }
    if(b < 0){
        b *= (-1);
    }

    printf("%d\n", r);
    if(a == b){
        printf("empate\n");
    }else if(a > b){
        printf("Cebolinha\n");
    }else if(a < b){
        printf("Chico Bento\n");
    }
}
