#include <stdio.h>
#include <math.h>

int main(){
    int n; 
    scanf("%d", &n);
    double matriz[n][n];

    double maiorValor = -1;
    int index = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    for(int j = 0; j < n; j++){
        double soma = 0;
        for(int i = 0; i < n; i++){
            soma += pow(matriz[i][j], 2.0);
        }
        if(soma > maiorValor){
            maiorValor = soma; 
            index = j;
        }
    }

    printf("%d\n", index);
}