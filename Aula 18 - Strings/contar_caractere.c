#include <stdio.h>

int main(){
    char str[101], l;
    int cont = 0;
    scanf("%[^\n]s", str);
    scanf(" %c", &l);
    for(int i = 0; i < 100; i++){
        if(str[i] == '\0'){
            break;
        }
    
        if(l == str[i]){
            cont++;
        }else{
            continue;
        }
    }

    printf("%d\n", cont);


}