    #include <stdio.h>

    int main(){
        int matriz[3][3];
        int soma_p = 0;
        int oks = 1;
        for(int i =0; i <3; i++){
            for(int j =0; j <3; j++){
                scanf("%d", &matriz[i][j]);
                if(!i){soma_p += matriz[i][j];}
            }
        }
        int soma_d = 0;
        for(int i =0; i <3; i++){
            int soma = 0;
            for(int j =0; j <3; j++){
                soma += matriz[i][j];

                if(i == j){
                    soma_d += matriz[i][j];
                }
                if(j == (3 - 1) - i){
                    soma_d -= matriz[i][j];
                }
            }
            if(soma != soma_p){ oks = 0;}
        }
        if(oks && soma_d == 0){
            printf("sim\n");
        }else{
            printf("nao\n");
        }
    }