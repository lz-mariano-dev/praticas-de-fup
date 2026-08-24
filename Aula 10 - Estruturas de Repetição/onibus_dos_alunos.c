#include <stdio.h>

int main(){
    int capacidade = 0, quant_alunos = 0, movimento = 0;
    scanf("%d", &capacidade);
    while(quant_alunos < (capacidade * 2)){
        scanf("%d", &movimento);
        quant_alunos += movimento;
        if(quant_alunos == 0){
            printf("vazio\n");
        }else if(quant_alunos < capacidade){
            printf("ainda cabe\n");
        }else if(quant_alunos == capacidade && quant_alunos < (capacidade * 2)){
            printf("lotado\n");
        }else if(quant_alunos == (capacidade * 2)){
            printf("hora de partir\n");
        } 
    }
}