#include <stdio.h>

char rotacao(char let, int num);

int main(){
    char n;
    int r;
    scanf("%c %d", &n, &r);
    printf("%c\n", rotacao(n, r));
}

char rotacao(char let, int num){
    char res;
    if((let + (num)) < 97){
        res = (let + (num)) + 26;
    }else if((let + (num)) > 122){
        res = (let + (num)) - 26;
    }else{
        res = (let + (num));
    }
    return res;
}