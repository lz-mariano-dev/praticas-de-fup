#include <stdio.h>

int main(){
    char jog1, jog2;
    scanf(" %c %c", &jog1, &jog2);
    if(jog1 == jog2){
        printf("empate");
    }else 
    if( (jog1 == 'T' && (jog2 == 'P' || jog2 == 'L')) || 
        (jog1 == 'P' && (jog2 == 'R' || jog2 == 'S')) ||
        (jog1 == 'S' && (jog2 == 'T' || jog2 == 'R')) ||
        (jog1 == 'L' && (jog2 == 'S' || jog2 == 'P')) ||
        (jog1 == 'R' && (jog2 == 'L' || jog2 == 'T')) )
        {printf("jog1");}
    else{pirntf("jog2");}
}

/*
Tesoura corta papel
Tesoura decapita lagarto
Papel cobre pedra
Papel refuta Spock
Spock esmaga (ou derrete) tesoura
Spock vaporiza pedra
Lagarto envenena Spock
Lagarto come papel
Pedra esmaga lagarto
Pedra amassa tesoura
*/