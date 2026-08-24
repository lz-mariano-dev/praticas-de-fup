#include <stdio.h>

int main (){
    char str[101];
    int i, l;
    scanf("%[^\n]s", str);
    scanf("%d %d", &i, &l);
    l = (i + l) - 1;
    for(i; i < l; i++){
        if(str[i] == '\0'){
            break;
        }
        printf("%c", str[i]);
    }
    printf("\n");
}