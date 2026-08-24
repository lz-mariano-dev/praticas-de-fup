#include <stdio.h>

int main(){
    int n, p = 0, t =0;

    char x, y;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf(" %c %c", &x, &y);
        if(x == 'c'){
            p++;
        }else if(x == 'l'){
            p--;
        }
        if(y == 'm'){
            t++;
        }else if(y == 't'){
            t--;
        }
    }
    
    if(p > 0){
        printf("c\n");
    }else if(p < 0){
        printf("l\n");
    }else{
        printf("empate\n");
    }
    if(t > 0){
        printf("t\n");
    }else if(t < 0){
        printf("m\n");
    }else{
        printf("empate\n");
    }

}