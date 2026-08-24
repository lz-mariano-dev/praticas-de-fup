#include <stdio.h>

int main(){
    int n, p, menor =100, maior = -100, soma = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &p);
        if(p < menor){
            menor = p;
        }
        if(p > maior){
            maior = p;
        }
        soma+= p;
    }
    printf("%d\n", soma - (maior + menor));
}