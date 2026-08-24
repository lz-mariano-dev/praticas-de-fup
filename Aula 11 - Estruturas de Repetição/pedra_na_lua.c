#include <stdio.h>
#include <stdlib.h>

int main(){
    int nump, dif = 100, vence, cont = 0;
    int p1 = 0, p2 = 0;
    scanf("%d", &nump);

    for(int i = 0; i < nump; i++){
        scanf("%d", &p1);
        scanf("%d", &p2);
        if(p1 >= 10 && p2 >= 10){
            if(dif > abs(p1 - p2)){
                dif = abs(p1 - p2);
                vence = i;
            }
        }else{
            cont++;
        }
    }
    if(cont == nump){
        printf("sem ganhador\n");
    }else{
        printf("%d\n", vence);
    }
    
    
    return 0;
}