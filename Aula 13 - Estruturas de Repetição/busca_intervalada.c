#include <stdio.h>

int main(){
    int n, li, ls, x, s = 0;
    scanf("%d %d %d", &n, &li, &ls);
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        if(x >= li && x <= ls){
            s++;
        }
    }
    printf("%d\n", s);
}