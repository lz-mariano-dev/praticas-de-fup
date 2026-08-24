#include <stdio.h>

typedef struct{
    int x;
    int y;
}Ponto;
typedef struct{
    int xs, ys;
    int xi, yi;
}Retang;

int main(){
    Ponto p;
    Retang r;
    scanf("%d %d %d %d", &r.xs, &r.ys, &r.xi, &r.yi);
    scanf("%d %d", &p.x, &p.y);

    if((p.x >= r.xs && p.x <= r.xi) && (p.y <= r.ys && p.y >= r.yi)){
        printf("%d", 1);
    }else{
        printf("%d", 0);  
    }
}