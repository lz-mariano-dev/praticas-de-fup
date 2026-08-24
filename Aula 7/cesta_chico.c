#include <stdio.h>

int main(){
    int capacidade, soma, tempo, banana, goiaba, manga;
    
    scanf("%d %d %d %d", &capacidade, &banana, &goiaba, &manga);
    soma = banana + manga + goiaba;
    if(soma%capacidade){
        tempo = (soma/capacidade) + 1;
    }else{
        tempo = (soma/capacidade);
    }
    
    printf("%d\n", tempo);
    return 0;
}