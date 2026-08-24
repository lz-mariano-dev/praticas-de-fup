#include <stdio.h>

void verif_letter(char chute[], char palavra[], char m);

int main(){
    char palavra[101];
    char chutes[27];
    char mark;

    scanf("%[^\n]s", palavra);
    scanf(" %[^\n]s", chutes);
    scanf(" %c", &mark);

    verif_letter(chutes, palavra, mark);
}


void verif_letter(char chute[], char palavra[], char m){

    for(int i = 0; palavra[i] != '\0'; i++){

        char lett = palavra[i];
        int oks = 0;

        if(lett >= 65 && lett <= 90){
            lett += 32;
        }
        
        for(int j = 0; chute[j] != '\0'; j++){
            if(chute[j] >= 65 && chute[j] <= 90){
                chute[j] += 32;
            }
            if(lett == chute[j]){
                lett = chute[j];
                oks = 1;
            }
        }

        if(oks == 0 && (lett >= 97 && lett <= 122)){
            printf("%c", m);
        }else{
            printf("%c", palavra[i]);
        }
        
    }
    printf("\n");
}