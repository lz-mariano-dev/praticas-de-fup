#include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;


int main(){
    Data data[2];
    char result[20];
    for(int i = 0; i < 2; i++){
        scanf("%d", &data[i].dia);
        scanf("%d", &data[i].mes);
        scanf("%d", &data[i].ano);
    }
    if(data[0].dia == data[1].dia && data[0].mes == data[1].mes && data[0].ano == data[1].ano){
        printf("Iguais\n");  
    }else{
        if(data[0].ano < data[1].ano){
            printf("Mais antiga");
        }else if(data[0].ano > data[1].ano){
            printf("Mais recente");
        }else{
            if(data[0].mes < data[1].mes){
                printf("Mais antiga");
            }else if(data[0].mes > data[1].mes){
                printf("Mais recente");
            }else{
                if(data[0].dia < data[1].dia){
                    printf("Mais antiga");
                }else if(data[0].dia > data[1].dia){
                    printf("Mais recente");
                }else{
                    printf("Iguais");
                }
            }
        }
    }

}