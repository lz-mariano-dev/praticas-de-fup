#include <stdio.h>

int main(){
    int n, soma_jed = 0, soma_sith = 0, p;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &p);
        if(i <= n/2){
            soma_jed += p;
        }else{
            soma_sith += p;
        }
    }

    if(soma_jed > soma_sith){
        printf("Jedi\n");
    }else if(soma_jed < soma_sith){
        printf("Sith\n");
    }else{
        printf("Empate");
    }
}