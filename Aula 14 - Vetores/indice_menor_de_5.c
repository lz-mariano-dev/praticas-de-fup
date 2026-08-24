#include <stdio.h>

int main (){
    int vetor[5], menor = 31, n;
    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
        if(vetor[i] <= menor){
            menor = vetor[i];
            n = i;
        }
    }
    printf("%d\n", n);
    
    return 0;
}