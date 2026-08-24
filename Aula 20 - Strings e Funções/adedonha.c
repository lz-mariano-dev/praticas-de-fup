#include <stdio.h>

int reduzir(int n);

int main(){
    int d;
    char let;

    scanf("%d", &d);
    if(d != 0){
        if(d > 26){
            let = reduzir(d) + 'a';
        }else{
            let = d + '`';
        }
        printf("%c\n", let);
    }else{
        printf("joguem de novo");
    }
    
}

int reduzir(int n){
    while(n > 26){
        n -= 26;
    }
    return n - 1;
}