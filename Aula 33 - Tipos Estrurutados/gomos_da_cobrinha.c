#include <stdio.h>

typedef struct{
    int x;
    int y;
} Gomo;

int main(){
    int q;
    char p;
    scanf("%d %c", &q, &p);

    Gomo c[q];
    for(int i = 0; i < q; i++){
        scanf("%d %d", &c[i].x, &c[i].y);
    }

    Gomo novo[q];

    novo[0] = c[0];
    if(p == 'L') novo[0].x--;
    else if(p == 'R') novo[0].x++;
    else if(p == 'U') novo[0].y--;
    else if(p == 'D') novo[0].y++;

    for(int i = 1; i < q; i++){
        novo[i] = c[i-1];
    }

    for(int i = 0; i < q; i++){
        printf("%d %d\n", novo[i].x, novo[i].y);
    }
}