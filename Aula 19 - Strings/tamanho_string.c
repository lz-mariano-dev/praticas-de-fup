#include <stdio.h>
void str_size(char str[]);

int main(){
    char frase[101];
    for(int i = 0; i < 3; i++){
        scanf(" %[^\n]s", frase);
        str_size(frase);
    }

}

void str_size(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    printf("%d\n", i);
}