#include <stdio.h>
#include <string.h>

int verif_jokenpo(char j1[], char j2[]){
    char jokenpo[9][10] = {
        "paper", "air", "water", "gun", "rock", "fire", "scissors", "human", "sponge"
    };

    int pont_mar = -1;

    for(int i = 0; i < 9; i++){
        if(strcmp(j1, jokenpo[i]) == 0){
            pont_mar = i;
            break;
        }
    }
    int j = 0;
    while(j < 5){
        if((pont_mar) == 8){
            pont_mar = 0;
        }
        if(strcmp(j2, jokenpo[pont_mar]) == 0){
            return 1;
        }
        pont_mar++;
        j++;
    }

    return 0;
        
}

int main(){
    
    char jg1[10];
    char jg2[10];

    scanf("%[^\n]s", jg1);
    scanf(" %[^\n]s", jg2);

    if(strcmp(jg1, jg2) == 0){
        printf("empate\n");
    }else{
        if(verif_jokenpo(jg1, jg2)){
            printf("jog1\n");
        }else{
            printf("jog2\n");
        }
    }
}