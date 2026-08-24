#include <stdio.h>

int main (){
    char jog1, jog2;
    scanf(" %c %c", &jog1, &jog2);
    if(jog1 == jog2){
        printf("empate");
    }else if((jog1 == 'R' && jog2 == 'S') || (jog1 == 'S' && jog2 == 'P')|| (jog1 == 'P' && jog2 == 'R') ){
        printf("jog1");
    }else{
        printf("jog2");
    }
    return 0;
}