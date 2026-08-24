#include <stdio.h>

int main(){
    char h[51];
    char n[51];
    int ordem[51];
    scanf("%[^\n]s", h);
    scanf(" %[^\n]s", n);
    for(int i = 0; h[i] != '\0'; i++){
        for(int j = 0; n[j] != '\0'; j++){
            if(h[i] == n[j]){
                printf("%d\n", i);
                break;
            }
        }
    }
}