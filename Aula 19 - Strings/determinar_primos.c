#include <stdio.h>

int detector_primo(int x);

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for(a; a <= b; a++){
        if(detector_primo(a)){
            printf("%d\n", a);
        }else{
            continue;
        }
    }
}

int detector_primo(int x){
    if(x <= 1){return 0;}
    for(int i = 2; i < x; i++){
        if(x % i == 0){
            return 0;
        }
    }
    return 1;
}