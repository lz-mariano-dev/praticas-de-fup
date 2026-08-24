#include <stdio.h>

struct expressao{
    char opr;
    int n1;
    int n2;
};

void realizar_ex(struct expressao e){

    switch(e.opr){
        case '+':
            printf("%d\n", e.n1 + e.n2);
            break;
        case '-':
            printf("%d\n", e.n1 - e.n2);
            break;
        case '*':
            printf("%d\n", e.n1 * e.n2);
            break;
        case '/':
            printf("%d\n", e.n1 / e.n2);
            break;
    }
}

int main(){
    struct expressao ex;
    scanf("%d %d %c", &ex.n1, &ex.n2, &ex.opr);
    realizar_ex(ex);
    return 0;
}