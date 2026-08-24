#include <stdio.h>
#include <math.h>

int verif_num(char let);

int main(){
    char frase[101];
    int i = 0, soma = 0;
    scanf("%[^\n]s", frase);

    while(frase[i] != '\0'){
        if(verif_num(frase[i])){
            int num = 0;

            if(verif_num(frase[i + 1])){
                int cont = i;
                while(frase[i] != ' ' && frase[i] != '\0'){i++;}
                for(cont; cont < i; cont++){
                    num += (frase[cont] - 48) * (int)pow(10, i - cont -1);
                }
            }else{
                num = frase[i] - 48;
                i++;
            }

            soma += num;
            continue;

        }

        i++;
    
    }

    printf("%d\n", soma);
    
}

int verif_num(char let){
    if(let >= 48 && let <= 57){
        return 1;
    }
    return 0;
}


