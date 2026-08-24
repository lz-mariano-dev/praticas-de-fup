#include <stdio.h>

int main (){
    int vetor[5], menor = 30;
    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
        if(vetor[i] <= menor){
            menor = vetor[i];
        }
    }
    printf("%d\n", menor);
    
    return 0;
}

