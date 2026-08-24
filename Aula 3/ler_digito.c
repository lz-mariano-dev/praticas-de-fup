#include <stdio.h>

int potencia_int(int valor, int expo){
    if(expo == 0){
        return 1;
    }
    int result = 0;
    int temp = valor;
    
    for(int i = 0; i < expo; i++){
        result = temp;
        temp = valor * result;
    }

    return result;
}

int main(){

    int valor = 1234;
    int numero[4];

    for(int i = 3; i >= 0; i--){
        int potencia = potencia_int(10 , i);

        numero[3 - i] = valor / potencia;
        valor = valor % potencia;   
    }

    for(int i = 0; i < 4; i++){
        printf("%d\n", numero[i]);
    }
    

    return 0;

}